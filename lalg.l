%{
    #include <stdio.h>
    int nlines = 0;
    int nchars = 0;
%}

TKN_DIGITO [0-9]
TKN_VAR [a-zA-Z][a-zA-Z0-9_]*
%%

"\n" {nlines++;}
. {nchars++;}
%%
// Funções auxiliares
int main(){
	yylex();
    printf("Lines: %d\nChars: %d\n", nlines, nchars); 
    return 0;
}
