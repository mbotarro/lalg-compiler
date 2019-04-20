%{
    #include <string>
    #include <iostream>
    #include <unordered_map>
    #include "tokens.h"

    using namespace std;

    struct Pair{
        string text;
        int token;
    };

    static unordered_map<int, string> tokens_name = get_tokens_name();
    static unordered_map<string, int> keywords = get_keywords();    
%}

letra [a-zA-Z]
digito [0-9]

%%
[ \t\n\f\r]+ { /* printf("whitespace\n"); */ }
"{".*"}" { } { /* printf("comment\n"); */ }

"." { return T_PT; }
"," { return T_VIR; }
":" { return T_DOIS_PTS; }
";" { return T_PT_VIR; }
"(" { return T_APAR; }
")" { return T_FPAR; }

{letra}({letra}|{digito}|_)* { return T_ID; }
-?{digito}+ { return T_NUM_INT; }
-?{digito}+"."{digito}+ { return T_NUM_REAL; }

"-"?{digito}+"."{letra}+{digito}* { return T_ERRO; }
. { return T_ERRO; }

<<EOF>> { return T_EOF; }

%%

Pair next_token(){
    int token_type = yylex();

    Pair p;
    p.text = yytext;
    p.token = token_type;

    if ( p.token == T_ID && keywords.find(p.text) != keywords.end() ){
        p.token = keywords[p.text];
    }

    return p;
}

int main()
{    
    int token = 0;
    while (1){
        Pair p = next_token();
        if (p.token == -1)
            break;

        cout << p.text << " - " << tokens_name[p.token] << endl;
    }

    return 0;
}
