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

programa:       PROGRAM ID PT_VIR corpo PT { cout << "SINTAX PROGRAM\n"; } 
                ;



lista_arg:                                      { cout << "SINTAX lista_arg\n"; }
                ABRE_PAR argumentos FECHA_PAR   { cout << "SINTAX lista_arg\n"; }
                ;

argumentos:     ID mais_ident                   { cout << "SINTAX argumentos\n"; }
                ;


mais_ident:                                     { cout << "SINTAX mais_ident\n"; }
                | PT_VIR argumentos             { cout << "SINTAX mais_ident\n"; }
                ;

pfalsa:                                         { cout << "SINTAX pfalsa\n"; }
                | ELSE cmd                      { cout << "SINTAX pfalsa\n"; }
                ;

comandos:                                       { cout << "SINTAX comandos\n"; }
                | cmd PT_VIR comandos           { cout << "SINTAX comandos\n"; }
                ;

cmd:            IF condicao THEN cmd pfalsa     { cout << "SINTAX cmd\n"; }
                | ID ATRIB expressao            { cout << "SINTAX cmd\n"; }
                | ID lista_arg                  { cout << "SINTAX cmd\n"; }
                ;

condicao:       expressao relacao expressao     { cout << "SINTAX condicao\n"; }
                ;

relacao:        IGUAL                           { cout << "SINTAX relacao\n"; }
                | DIF                           { cout << "SINTAX relacao\n"; }
                | MAIOR_IGUAL                   { cout << "SINTAX relacao\n"; }
                | MENOR_IGUAL                   { cout << "SINTAX relacao\n"; }
                | MAIOR                         { cout << "SINTAX relacao\n"; }
                | MENOR                         { cout << "SINTAX relacao\n"; }
                ;

expressao:      termo outros_termos             { cout << "SINTAX expressao\n"; }
                ;

op_un:                                          { cout << "SINTAX op_un\n"; }        
                | MAIS                          { cout << "SINTAX op_un\n"; }
                | MENOS                         { cout << "SINTAX op_un\n"; }
                ;

outros_termos:                                  { cout << "SINTAX outros_termos\n"; }
                | op_ad termo outros_termos     { cout << "SINTAX outros_termos\n"; }
                ;


op_ad:          MAIS                            { cout << "SINTAX op_ad\n"; }
                | MENOS                         { cout << "SINTAX op_ad\n"; }
                ;

termo:          op_un fator mais_fatores        { cout << "SINTAX termo\n"; }
                ;

mais_fatores:                                   { cout << "SINTAX mais_fatores\n"; }
                | op_mul fator mais_fatores     { cout << "SINTAX mais_fatores\n"; }
                ;


op_mul:         MULT                            { cout << "SINTAX op_mul\n"; }
                | DIV                           { cout << "SINTAX op_mul\n"; }
                ;       

fator:          ID                              { cout << "SINTAX fator\n"; }
                | numero                        { cout << "SINTAX fator\n"; }
                | ABRE_PAR expressao FECHA_PAR  { cout << "SINTAX fator\n"; }
                ;       

numero:         NUM_INT                         { cout << "SINTAX numero\n"; }
                | NUM_REAL                      { cout << "SINTAX numero\n"; }
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
