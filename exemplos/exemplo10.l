%{
#include <stdio.h>
#include <stdlib.h>
int nlines=0;
%}

DIGITO [0-9]
REAL {DIGITO}+"."{DIGITO}+
ID [a-zA-Z][a-zA-Z0-9_]*

%%

{DIGITO}+ {printf("Encontrado TKN_NUM_ENTERO: %d\n",atoi(yytext));} 
{REAL} {printf("Encontrado TKN_NUM_REAL: %f\n",atof(yytext));}
"=" {printf("Encontrado TKN_ASIGN: %s\n",yytext);}
";" {printf("Encontrado TKN_PTOCOMA: %s\n",yytext);}
"*" {printf("Encontrado TKN_MULT: %s\n",yytext);}
"/" {printf("Encontrado TKN_DIV: %s\n",yytext);} 
"+" {printf("Encontrado TKN_MAS: %s\n",yytext);} 
"-" {printf("Encontrado TKN_MENOS: %s\n",yytext);} 
"(" {printf("Encontrado TKN_PAA: %s\n",yytext);}
")" {printf("Encontrado TKN_PAC: %s\n",yytext);}
"cos" {printf("Encontrado TKN_COS: %s\n",yytext);} 
"sen" {printf("Encontrado TKN_SEN: %s\n",yytext);} 
{ID} {printf("Encontrado TKN_ID: %s\n",yytext);} 
"\n" {nlines++;}

%%

int main()
{
yylex();
printf("\nNumero lineas analizadas: %d\n", nlines); 
return 0;
}


