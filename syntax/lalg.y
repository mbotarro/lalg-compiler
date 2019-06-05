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

programa:   PROGRAM ID PT_VIR corpo PT                    { cout << "SINTAX PROGRAM\n"; } 
            ;

corpo:      dc T_BEGIN comandos END                       { cout << "SINTAX CORPO\n"; }
            ;

dc:         dc_c dc_v dc_p                                { cout << "SINTAX DC\n"; }
            ;

dc_c:                                                     { cout << "SINTAX DC_C\n"; }
            | CONST ID IGUAL numero PT_VIR dc_c           { cout << "SINTAX DC_C\n"; }
            ;

dc_v:                                                     {cout << "SINTAX DC_V\n"; } 
            | VAR variaveis DOIS_PTS tipo_var PT_VIR dc_v {cout << "SINTAX DC_V\n"; }
            ;

tipo_var:   REAL                                          { cout << "SINTAX TIPO_VAR\n"; }
            | INT                                         { cout << "SINTAX TIPO_VAR\n"; }
            ;

variaveis:  ID mais_var                                   { cout << "SINTAX VARIAVEIS\n"; }
            ;

mais_var:                                                 { cout << "SINTAX MAIS_VAR\n"; }
            | VIR variaveis                               { cout << "SINTAX MAIS_VAR\n"; }
            ;

dc_p:                                                     { cout << "SINTAX DC_P\n"; }
            | PROCEDURE ID parametros PT_VIR corpo_p dc_p { cout << "SINTAX DC_P\n"; }
            ;

parametros:                                               { cout << "SINTAX PARAMETROS\n"; }
            | ABRE_PAR lista_par FECHA_PAR                { cout << "SINTAX PARAMETROS\n"; }
            ;

lista_par:  variaveis DOIS_PTS tipo_var mais_par          { cout << "SINTAX LISTA_PAR\n"; }
            ;

mais_par:                                                 { cout << "SINTAX MAIS_PAR\n"; }
            | PT_VIR lista_par                            { cout << "SINTAX MAIS_PAR\n"; }
            ;

corpo_p:    dc_loc T_BEGIN comandos END PT_VIR            { cout << "SINTAX CORPO_P\n"; }
            ;

dc_loc:     dc_v                                          { cout << "SINTAX DC_LOC\n"; }
            ;




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
