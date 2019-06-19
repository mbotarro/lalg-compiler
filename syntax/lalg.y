%{
    #include <iostream>

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
%token PROGRAM CONST VAR REAL INT PROCEDURE T_BEGIN END READ WRITE WHILE
%token DO FOR TO IF THEN ELSE

%%

// ========================================================================================================
// programa
// ========================================================================================================
programa:       PROGRAM programa_0                    { cout << "SINTAX programa\n"; }
                
                // seguidores de PROGRAM

                | error ID { yyerror("program"); } programa_1
                | error PT_VIR { yyerror("program"); } corpo programa_2
                | error PT  { yyerror("program"); }
                ;                                                                       

programa_0:     ID programa_1

                // seguidores de ID

                | error PT_VIR { yyerror("ID"); } corpo programa_2
                | error PT { yyerror("ID"); }
                ;

programa_1:     PT_VIR corpo programa_2

                // seguidores de PT_VIR

                | error PT { yyerror(";"); }
                ;

programa_2:     PT
                | error { yyerror("."); }
                ;


// ========================================================================================================
// corpo
// ========================================================================================================
corpo:          dc T_BEGIN comandos END { cout << "SINTAX corpo\n"; }
                | dc T_BEGIN comandos error { yyerror("end"); }
                | dc error { yyerror("begin"); } comandos END
                | dc error END { yyerror("begin"); }
                ;

// ========================================================================================================
// dc
// ========================================================================================================
dc:             dc_c dc_v dc_p                                { cout << "SINTAX dc\n"; }
                ;
// ========================================================================================================
// dc_c
// ========================================================================================================
dc_c:                                                         { cout << "SINTAX DC_C\n"; }
                | CONST dc_c_0                                { cout << "SINTAX DC_C\n"; }
                | error ID { yyerror("const"); } dc_c_1
                | error IGUAL { yyerror("const"); } numero dc_c_2
                | error PT_VIR { yyerror("const"); } dc_c
                | error { yyerrok; }
                ;

dc_c_0:         ID dc_c_1
                | error IGUAL { yyerror("id"); } numero dc_c_2
                | error PT_VIR { yyerror("id"); } dc_c
                ;

dc_c_1:         IGUAL numero dc_c_2
                | error numero { yyerror("="); } dc_c_2
                | error PT_VIR { yyerror("="); } dc_c
                ;

dc_c_2:         PT_VIR dc_c
                | error { yyerror(";"); } dc_c
                ;

// ========================================================================================================
// dc_v
// ========================================================================================================
dc_v:                                                         {cout << "SINTAX dc_v\n"; } 
                | VAR variaveis dc_v_0                        {cout << "SINTAX dc_v\n"; }
                | error variaveis { yyerror("var"); } dc_v_0
                | error DOIS_PTS { yyerror("var"); } tipo_var dc_v_1
                | error PT_VIR { yyerror("var"); } dc_v
                | error { yyerrok; }
                ;

dc_v_0:         DOIS_PTS tipo_var dc_v_1
                | error tipo_var { yyerror(":"); } dc_v_1
                | error PT_VIR { yyerror(":"); } dc_v
                ;

dc_v_1:         PT_VIR dc_v
                | error { yyerror(";"); } dc_v
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
                | error VIR { yyerror("id"); } variaveis
                | error { yyerror("id"); }
                ;

mais_var:                                                     { cout << "SINTAX mais_var\n"; }
                | VIR variaveis                               { cout << "SINTAX mais_var\n"; }
                | error ID { yyerror(","); } mais_var
                | error { yyerrok; }
                ;

// ========================================================================================================
// dc_p
// ========================================================================================================
dc_p:                                                         { cout << "SINTAX dc_p\n"; }
                | PROCEDURE dc_p_0                            { cout << "SINTAX dc_p\n"; }
                | error ID { yyerror("procedure"); } parametros dc_p_1
                | error PT_VIR { yyerror("procedure"); } corpo_p dc_p
                | error { yyerrok; }
                ;

dc_p_0:         ID parametros dc_p_1
                | error parametros { yyerror("id"); } dc_p_1
                ;

dc_p_1:         PT_VIR corpo_p dc_p
                | error corpo_p { yyerror(";"); } dc_p
                ;

parametros:                                                   { cout << "SINTAX parametros\n"; }
                | ABRE_PAR lista_par FECHA_PAR                { cout << "SINTAX parametros\n"; }
                | ABRE_PAR lista_par error { yyerror(")"); }
                | error lista_par { yyerror("("); } FECHA_PAR
                | error FECHA_PAR { yyerror("("); }
                error { yyerrok; }
                ;

lista_par:      variaveis DOIS_PTS tipo_var mais_par          { cout << "SINTAX lista_par\n"; }
                | variaveis error { yyerror(":"); } tipo_var mais_par
                ;

mais_par:                                                     { cout << "SINTAX mais_par\n"; }
                | PT_VIR lista_par                            { cout << "SINTAX mais_par\n"; }
                | error variaveis { yyerror(";"); } DOIS_PTS tipo_var mais_par
                | error { yyerrok; }
                ;

corpo_p:        dc_loc T_BEGIN comandos END PT_VIR            { cout << "SINTAX corpo_p\n"; }
                ;

dc_loc:         dc_v                                          { cout << "SINTAX dc_loc\n"; }
                ;

lista_arg:                                                    { cout << "SINTAX lista_arg\n"; }
                ABRE_PAR argumentos FECHA_PAR                 { cout << "SINTAX lista_arg\n"; }
                ;             
        
argumentos:     ID mais_ident                                 { cout << "SINTAX argumentos\n"; }
                ;             
        
        
mais_ident:                                                   { cout << "SINTAX mais_ident\n"; }
                | PT_VIR argumentos                           { cout << "SINTAX mais_ident\n"; }
                ;             
        
pfalsa:                                                       { cout << "SINTAX pfalsa\n"; }
                | ELSE cmd                                    { cout << "SINTAX pfalsa\n"; }
                ;             
        
comandos:                                                     { cout << "SINTAX comandos\n"; }
                | cmd PT_VIR comandos                         { cout << "SINTAX comandos\n"; }
                ;             
        
cmd:            READ ABRE_PAR variaveis FECHA_PAR             { cout << "SINTAX cmd\n"; }
                | WRITE ABRE_PAR variaveis FECHA_PAR          { cout << "SINTAX cmd\n"; }
                | WHILE ABRE_PAR condicao FECHA_PAR DO cmd    { cout << "SINTAX cmd\n"; }
                | IF condicao THEN cmd pfalsa                 { cout << "SINTAX cmd\n"; }
                | ID ATRIB expressao                          { cout << "SINTAX cmd\n"; }
                | ID lista_arg                                { cout << "SINTAX cmd\n"; }
                | T_BEGIN comandos END                        { cout << "SINTAX cmd\n"; }
                ;
                                
condicao:       expressao relacao expressao                   { cout << "SINTAX condicao\n"; }
                ;             
        
relacao:        IGUAL                                         { cout << "SINTAX relacao\n"; }
                | DIF                                         { cout << "SINTAX relacao\n"; }
                | MAIOR_IGUAL                                 { cout << "SINTAX relacao\n"; }
                | MENOR_IGUAL                                 { cout << "SINTAX relacao\n"; }
                | MAIOR                                       { cout << "SINTAX relacao\n"; }
                | MENOR                                       { cout << "SINTAX relacao\n"; }
                ;             
        
expressao:      termo outros_termos                           { cout << "SINTAX expressao\n"; }
                ;             
        
op_un:                                                        { cout << "SINTAX op_un\n"; }        
                | MAIS                                        { cout << "SINTAX op_un\n"; }
                | MENOS                                       { cout << "SINTAX op_un\n"; }
                ;             
        
outros_termos:                                                { cout << "SINTAX outros_termos\n"; }
                | op_ad termo outros_termos                   { cout << "SINTAX outros_termos\n"; }
                ;                   
        
op_ad:          MAIS                                          { cout << "SINTAX op_ad\n"; }
                | MENOS                                       { cout << "SINTAX op_ad\n"; }
                ;             
        
termo:          op_un fator mais_fatores                      { cout << "SINTAX termo\n"; }
                ;             
        
mais_fatores:                                                 { cout << "SINTAX mais_fatores\n"; }
                | op_mul fator mais_fatores                   { cout << "SINTAX mais_fatores\n"; }
                ;             
        
        
op_mul:         MULT                                          { cout << "SINTAX op_mul\n"; }
                | DIV                                         { cout << "SINTAX op_mul\n"; }
                ;       

fator:          ID                                            { cout << "SINTAX fator\n"; }
                | numero                                      { cout << "SINTAX fator\n"; }
                | ABRE_PAR expressao FECHA_PAR                { cout << "SINTAX fator\n"; }
                ;                     
        
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
    // TODO: DO NOT SHOW WHEN str == "syntax error"
    cout << "Era esperado " << str << ", encontrado: " << yytext << endl; 
    error = true;
    return 1;
}
