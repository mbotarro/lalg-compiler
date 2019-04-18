digit [0-9]
letter [a-zA-Z]
%%
{letter}({letter}|{digit})* {printf("variavel: %s\n", yytext);}
\n {printf(" nova linha\n");}
%%
int main()
{
	yylex();
	return 0;
}