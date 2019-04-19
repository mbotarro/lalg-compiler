%{
    extern "C" int yylex();
    #include <stdio.h>
    #include <string>
    #include <vector>
    #include <set>
    int nlines = 0;
    int nchars = 0;
    std::vector<std::string> words = {"program", "begin", "end", "var", "const", "procedure", "if", "then", "else", "read", "write", "do", "while", "integer", "float"};
    std::set<std::string> reserved(words.begin(), words.end());
%}

letter [a-zA-Z]
digit [0-9]
nonblank [^ \t]
point "."
delim ","|":"|";"|"."|"("|")"
op_add "+"|"-"
op_mul "*"|"/"
relation "="|"<>"|">="|"<="|">"|"<"
space " "
endline "\n"
%%

"{"[^}\n}]*"}" {}

{digit}{digit}* {
    printf("%s - num\n", yytext);
}

{digit}+{point}{digit}+ {
    printf("float - %s\n", yytext);
}

{letter}({digit}|{letter})* {
    if(reserved.count(yytext) != 0)
        printf("%s - %s\n", yytext, yytext);    
    else
        printf("%s - id\n", yytext);
}

{delim} {
    printf("%s - %s\n", yytext, yytext);
}
"\n" {
    nlines++;
}
. {
    nchars++;
}
%%
// Funções auxiliares
int main(){
	yylex();
    return 0;
}
