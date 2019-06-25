%{
    #include <iostream>
    #include <string.h>

    extern int yylex();
    extern int yyerror(const char *str);
    
    using namespace std;
    
    extern char *yytext;
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
%token PROGRAM CONST VAR REAL INT PROCEDURE T_BEGIN T_END READ WRITE WHILE
%token DO FOR TO IF THEN ELSE

%%

// ========================================================================================================
// programa
// ========================================================================================================
programa:       PROGRAM programa_0                    { cout << "SINTAX programa\n"; }
                | error ID { yyerror("program"); } programa_1
                | error PT_VIR { yyerror("program"); } corpo programa_2
                | error PT  { yyerror("program"); }
                | error { yyerror("program"); } corpo programa_2
                ;

programa_0:     ID programa_1
                | error PT_VIR { yyerror("ID"); } corpo programa_2
                | error PT { yyerror("ID"); }
                | error { yyerror("id"); } corpo programa_2
                ;

programa_1:     PT_VIR corpo programa_2
                | error PT { yyerror(";"); }
                | error { yyerror(";"); } corpo programa_2
                ;

programa_2:     PT
                | error { yyerror("."); }
                ;

// ========================================================================================================
// corpo
// ========================================================================================================
corpo:          dc T_BEGIN comandos corpo_0 { cout << "SINTAX corpo\n"; }
                | dc error T_END { yyerror("begin"); }
                ;

corpo_0:        T_END
                ;

// ========================================================================================================
// dc
// ========================================================================================================
dc:             dc_c dc_v dc_p                                { cout << "SINTAX dc\n"; }
                ;

// ========================================================================================================
// dc_c
// ========================================================================================================
dc_c:           dc_c_0 dc_c                                   { cout << "SINTAX DC_C\n"; }
                |                                             { cout << "SINTAX DC_C\n"; }
                ;

dc_c_0:         CONST ID dc_c_1
                | CONST error IGUAL { yyerror("ID"); } numero dc_c_3
                | CONST error PT_VIR { yyerror("ID"); }
                ;

dc_c_1:         IGUAL dc_c_2
                | error PT_VIR { yyerror("="); }
                ;

dc_c_2:         numero dc_c_3
                | error PT_VIR { yyerror(";"); }
                ;

dc_c_3:         PT_VIR 
                | error { yyerror(";"); }
                ;

// ========================================================================================================
// dc_v
// ========================================================================================================
dc_v:           dc_v_0 dc_v                                   {cout << "SINTAX dc_v\n"; } 
                |                                             {cout << "SINTAX dc_v\n"; } 
                ;

dc_v_0:         VAR variaveis DOIS_PTS tipo_var dc_v_1
                | VAR variaveis error PT_VIR { yyerror(":"); }
                ;

dc_v_1:         PT_VIR
                | error { yyerror(";"); }
                ;

// ========================================================================================================
// tipo_var
// ========================================================================================================
tipo_var:       REAL                                          { cout << "SINTAX tipo_var\n"; }
                | INT                                         { cout << "SINTAX tipo_var\n"; }
                | error { yyerror("tipo de dado (integer ou real)"); }
                ;


// ========================================================================================================
// variaveis
// ========================================================================================================
variaveis:      ID mais_var                                   { cout << "SINTAX variaveis\n"; }
                | error { yyerror("id"); } mais_var
                ;

mais_var:                                                     { cout << "SINTAX mais_var\n"; }
                | VIR variaveis                               { cout << "SINTAX mais_var\n"; }
                ;

// ========================================================================================================
// dc_p
// ========================================================================================================

dc_p:           dc_p_0 dc_p                                   { cout << "SINTAX dc_p\n"; }
                |                                             { cout << "SINTAX dc_p\n"; }
                ;

dc_p_0:         PROCEDURE ID parametros dc_p_1
                | PROCEDURE error PT_VIR { yyerror("id"); } corpo_p
                ;

dc_p_1:         PT_VIR corpo_p
                | error { yyerror(";"); } corpo_p 
                ;

// ========================================================================================================
// parametros
// ========================================================================================================
parametros:                                                   { cout << "SINTAX parametros\n"; }
                | ABRE_PAR lista_par FECHA_PAR                { cout << "SINTAX parametros\n"; }
                | ABRE_PAR lista_par error { /*yyclearin;*/ yyerror(")"); }
                ;

lista_par:      variaveis DOIS_PTS tipo_var mais_par          { cout << "SINTAX lista_par\n"; }
                ;

mais_par:                                                     { cout << "SINTAX mais_par\n"; }
                | PT_VIR lista_par                            { cout << "SINTAX mais_par\n"; }
                ;

// ========================================================================================================
// corpo_p
// ========================================================================================================
corpo_p:        dc_loc T_BEGIN comandos corpo_p_0                              { cout << "SINTAX corpo_p\n"; }
                | dc_loc error T_END { yyerror("begin"); } corpo_p_1
                | dc_loc error PT_VIR { yyerror("begin"); }
                ;

corpo_p_0:      T_END corpo_p_1
                | error PT_VIR { yyerror("end"); }
                ;

corpo_p_1:      PT_VIR
                | error { yyerror(";"); }
                ;

// ========================================================================================================
// dc_loc
// ========================================================================================================
dc_loc:         dc_v                                          { cout << "SINTAX dc_loc\n"; }
                ;

// ========================================================================================================
// lista_arg
// ========================================================================================================
lista_arg:                                                    { cout << "SINTAX lista_arg\n"; }
                | ABRE_PAR argumentos FECHA_PAR               { cout << "SINTAX lista_arg\n"; }
                | ABRE_PAR argumentos error { yyerror(")"); }
                ;
        
// ========================================================================================================
// argumentos
// ========================================================================================================
argumentos:     ID mais_ident                                 { cout << "SINTAX argumentos\n"; }
                | error { yyerror("ID"); } mais_ident
                ;            
        
// ========================================================================================================
// mais_ident
// ========================================================================================================
mais_ident:                                                   { cout << "SINTAX mais_ident\n"; }
                | PT_VIR argumentos                           { cout << "SINTAX mais_ident\n"; }
                ;             
        
// ========================================================================================================
// pfalsa
// ========================================================================================================
pfalsa:                                                       { cout << "SINTAX pfalsa\n"; }
                | ELSE cmd                                    { cout << "SINTAX pfalsa\n"; }
                ;             
        
// ========================================================================================================
// comandos
// ========================================================================================================
comandos:                                                     { cout << "SINTAX comandos\n"; }
                | cmd PT_VIR comandos                         { cout << "SINTAX comandos\n"; }
                | cmd error { /**/; yyerror(";"); } comandos
                | error PT_VIR { yyerror("cmd"); } comandos
                ;             
        
// ========================================================================================================
// cmd
// ========================================================================================================
cmd:            READ ABRE_PAR variaveis FECHA_PAR             { cout << "SINTAX cmd - read\n"; }
                | WRITE ABRE_PAR variaveis FECHA_PAR          { cout << "SINTAX cmd - write\n"; }
                | WHILE ABRE_PAR condicao FECHA_PAR DO cmd    { cout << "SINTAX cmd - while\n"; }
                | IF condicao THEN cmd pfalsa                 { cout << "SINTAX cmd - if\n"; }
                | ID ATRIB expressao                          { cout << "SINTAX cmd - atrib\n"; }
                | ID lista_arg                                { cout << "SINTAX cmd - procedure\n"; }
                | T_BEGIN comandos T_END                          { cout << "SINTAX cmd - begin/end\n"; }
                
                | IF condicao error { yyerror("then"); } cmd pfalsa
                | WHILE ABRE_PAR condicao FECHA_PAR error { yyerror("do"); } cmd
                
                ;

// ========================================================================================================
// condicao
// ========================================================================================================
condicao:       expressao relacao expressao                   { cout << "SINTAX condicao\n"; }
                ;             
        
// ========================================================================================================
// relacao
// ========================================================================================================
relacao:        IGUAL                                         { cout << "SINTAX relacao\n"; }
                | DIF                                         { cout << "SINTAX relacao\n"; }
                | MAIOR_IGUAL                                 { cout << "SINTAX relacao\n"; }
                | MENOR_IGUAL                                 { cout << "SINTAX relacao\n"; }
                | MAIOR                                       { cout << "SINTAX relacao\n"; }
                | MENOR                                       { cout << "SINTAX relacao\n"; }
                | error { yyerror("operador relacional(=, <>, >=, <=, >, <)"); }
                ;

// ========================================================================================================
// expressao
// ========================================================================================================
expressao:      termo outros_termos                           { cout << "SINTAX expressao\n"; }
                ;             
        
// ========================================================================================================
// op_um
// ========================================================================================================
op_un:                                                        { cout << "SINTAX op_un\n"; }        
                | MAIS                                        { cout << "SINTAX op_un\n"; }
                | MENOS                                       { cout << "SINTAX op_un\n"; }
                ;             
        
// ========================================================================================================
// outros_termos
// ========================================================================================================
outros_termos:                                                { cout << "SINTAX outros_termos\n"; }
                | op_ad termo outros_termos                   { cout << "SINTAX outros_termos\n"; }
                ;                   
        
// ========================================================================================================
// op_ad
// ========================================================================================================
op_ad:          MAIS                                          { cout << "SINTAX op_ad\n"; }
                | MENOS                                       { cout << "SINTAX op_ad\n"; }
                ;             
        
// ========================================================================================================
// termo
// ========================================================================================================
termo:          op_un fator mais_fatores                      { cout << "SINTAX termo\n"; }
                ;             
        
// ========================================================================================================
// mais_fatores
// ========================================================================================================
mais_fatores:                                                 { cout << "SINTAX mais_fatores\n"; }
                | op_mul fator mais_fatores                   { cout << "SINTAX mais_fatores\n"; }
                ;             
        
        
// ========================================================================================================
// op_mul
// ========================================================================================================
op_mul:         MULT                                          { cout << "SINTAX op_mul\n"; }
                | DIV                                         { cout << "SINTAX op_mul\n"; }
                ;       

// ========================================================================================================
// fator
// ========================================================================================================
fator:          ID                                            { cout << "SINTAX fator\n"; }
                | numero                                      { cout << "SINTAX fator\n"; }
                | ABRE_PAR fator_0                            { cout << "SINTAX fator\n"; }
                | error { yyerror("id, numero ou (expressão)"); }
                ;

fator_0:        expressao FECHA_PAR
                | expressao error { yyerror(")"); }
                ;
        
// ========================================================================================================
// numero
// ========================================================================================================
numero:         NUM_INT                                       { cout << "SINTAX numero\n"; }
                | NUM_REAL                                    { cout << "SINTAX numero\n"; }
                | error { yyerror("numero real ou inteiro"); }
                ; 
%%

extern int yyparse();

bool error = false;

int main()
{    
    yyparse();
    if (!error)
        printf("SUCCESS :D\n");
}

int yywrap(){
    return 1;
}

int yyerror(const char *str){
    if (strcmp (str,"syntax error") != 0){
        cout << "Era esperado " << str << ", encontrado: " << yytext << endl;
    }
    error = true;
    return 1;
}
