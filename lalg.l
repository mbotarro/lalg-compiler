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

    extern "C" int yylex();

    static unordered_map<int, string> tokens_name = get_tokens_name();
    static unordered_map<string, int> keywords = get_keywords();    
%}

letra [a-zA-Z]
digito [0-9]

%%
 /* espaco vazio / comentario */
[ \t\n\f\r]+    ;
"{".*"}"        ;

 /* pontuacao */
"."             { return T_PT; }
","             { return T_VIR; }
":"             { return T_DOIS_PTS; }
";"             { return T_PT_VIR; }
"("             { return T_ABRE_PAR; }
")"             { return T_FECHA_PAR; }

 /* atribuicao */
":="            { return T_ATRIB;}

 /* operadores relacionais */
"="             { return T_IGUAL; }
"<>"            { return T_DIF; }
">="            { return T_MAIOR_IGUAL; }
"<="            { return T_MENOR_IGUAL; }
">"             { return T_MAIOR; }
"<"             { return T_MENOR; }

 /* operadores aritimeticos */
"+"             { return T_MAIS; }
"-"             { return T_MENOS; }
"*"             { return T_MULT; }
"/"             { return T_DIV; }

 /* variaveis de usuario */
{letra}{1,16}                       { return T_ID_OR_RESERV; }
{letra}({letra}|{digito}|_){0,15}   { return T_ID; }
-?{digito}+                         { return T_NUM_INT; }
-?{digito}+"."{digito}+             { return T_NUM_REAL; }

{letra}{17,}                                            			{ return T_ERRO_TAM_MAX; }
"-"?{digito}+([a-zA-Z_]+{digito}*)+                     			{ return T_ERRO_NUM_INT_MAL_FORM; }
[^a-zA-Z0-9 "{""("\n"+""-""*""/""="">""<""."]+({letra}|{digito})+  		{ return T_ERRO_ID_MAL_FORM; }
"-"?{digito}+({letra}|{digito})*"."({digito}*{letra}+)*			{ return T_ERRO_NUM_REAL_MAL_FORM; }
"-"?{digito}+({letra}+{digito}*)*"."({digito}|{letra})* 			{ return T_ERRO_NUM_REAL_MAL_FORM; }
"-"?"."{digito}+					  			{ return T_ERRO_NUM_REAL_MAL_FORM; }
"{".*[^"}"]\n                                           			{ return T_ERRO_COMENT_MAL_FORM; }
.                                                       			{ return T_ERRO_SIM_N_REC; }

<<EOF>> { return T_EOF; }
%%

Pair next_token(){
    int token_type = yylex();

    Pair p;
    p.text = yytext;
    p.token = token_type;

    if ( p.token == T_ID_OR_RESERV){
        if(keywords.find(p.text) != keywords.end()){
            p.token = keywords[p.text];
        }
        else{
            p.token = T_ID;
        }
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
