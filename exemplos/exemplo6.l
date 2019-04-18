%{
#include <stdio.h>
%}

termina_com_x x$
comeca_com_x ^x
%%
{termina_com_x} printf("Termina com a letra x\n");
{comeca_com_x} printf("Começa com a letra x\n");
. ;
%%
int main()
{
	yylex();
	return 0;
}