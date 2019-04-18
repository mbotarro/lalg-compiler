%{
	#include <stdio.h>
	int n_char = 0;
	int n_lines = 0;

	void foo()
	{
		printf("Ola mundo!!!");
		printf("\n");
	}
%}

%%
\n {++n_lines, ++n_char;}
. ++n_char; 

%%
int main()
{
	foo();
	yylex();
	printf("n# of characters: %d" , n_char);
	printf("\n");
	printf("n# of lines : %d" , n_lines);
	printf("\n");
	
	return 0;
}
