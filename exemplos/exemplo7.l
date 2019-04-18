
letra [a-zA-Z]
palavra {letra}+
digito [0-9]
numero_enteiro -?{digito}({digito})*
numero_real -?{digito}+"."{digito}+
nova_linea \n

%%
{palavra} printf("Palavra encontrada\n");
{numero_enteiro} printf("Número inteiro encontrado\n");
{numero_real} printf("Número real encontrado\n");
. ;
%%

int main()
{
	yylex();
	return 0;
}