%{
    #include <iostream>

    extern int yylex();
    extern int yyerror(const char *str);
    
    using namespace std;
%}

// Auxiliary tokens
%token T_EOF

// User Tokens
%token ID NUM_INT NUM_REAL

// Ponctuation Marks
%token ABRE_PAR FECHA_PAR PT VIR DOIS_PTS PT_VIR

// Assignment Operator
%token ATRIB

// Relacional Operators
%token IGUAL DIF MAIOR_IGUAL MENOR_IGUAL MAIOR MENOR

// Arithmetic Operators
%token MAIS MENOS MULT DIV

// Keywords
%token PROGRAM CONST VAR REAL INT PROCEDURE T_BEGIN END READ WRITE WHILE
%token DO FOR TO IF THEN ELSE

%%

programa: PROGRAM ID PT_VIR corpo PT { cout << "SINTAX PROGRAM\n"; } 
corpo: T_BEGIN END { cout << "SINTAX CORPO\n"; }


%%


extern int yyparse();

int main()
{    
    yyparse();
}

int yywrap(){
    return 1;
}

int yyerror(const char *str){
    printf("ERROR searching for %d : %d", yychar, yylval);
    return 1;
}
