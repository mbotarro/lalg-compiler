%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string>
    #include <iostream>
    #include <map>
    #include <set>

    #define T_ID 0
    #define T_NUMERO_INT 1
    #define T_NUMERO_REAL 2
    #define T_COMENTARIO 3

    #define T_ATRIBUICAO 4

    // Ponctuation Marks
    #define T_VIRGULA 5
    #define T_DOIS_PONTOS 6
    #define T_PONTO_VIRGULA 7
    #define T_PONTO 8
    #define T_ABRE_PARENTESES 9
    #define T_FECHA_PARENTESES 10

    // Keywords
    #define T_PROGRAM 11
    #define T_BEGIN 12
    #define T_END 13
    #define T_CONST 14
    #define T_VAR 15
    #define T_PROCEDURE 16
    #define T_IF 17
    #define T_WHILE 18
    #define T_DO 19
    #define T_THEN 20
    #define T_ELSE 21
    #define T_READ 22
    #define T_WRITE 23

    // Logical Operators
    #define T_IGUAL 24
    #define T_DIFERENTE 25
    #define T_MAIOR_IGUAL 26
    #define T_MENOR_IGUAL 27
    #define T_MAIOR 28
    #define T_MENOR 29

    // Atithmetic Operators
    #define T_MAIS 30
    #define T_MENOS 31
    #define T_MULT 32
    #define T_DIV 33

    #define T_INTEGER 34
    #define T_REAL 35

    #define T_ERRO 36
    #define T_EOF -1

    using namespace std;

    static map<int, string> tokens_name;
    static map<string, int> keywords;
    
    struct Pair{
        string text;
        int token;
    };
%}

letra [a-zA-Z]
digito [0-9]
whitespace [ \t\n\f\r]

ponto "."
dois_pontos :
ponto_virgula ;
virgula ,
abre_parenteses "("
fecha_parenteses ")"

comentario "{".*"}"

ident {letra}({letra}|{digito}|_)*
numero_inteiro -?{digito}+
numero_real -?{digito}+"."{digito}+

%%
{whitespace}+ { }
{comentario} { }

{ponto} { return T_PONTO; }
{virgula} { return T_VIRGULA; }
{dois_pontos} { return T_DOIS_PONTOS; }
{ponto_virgula} { return T_PONTO_VIRGULA; }
{abre_parenteses} { return T_ABRE_PARENTESES; }
{fecha_parenteses} { return T_FECHA_PARENTESES; }

{ident} { return T_ID; }

{numero_inteiro} { return T_NUMERO_INT; }

{numero_real} { return T_NUMERO_REAL; }
"-"?{digito}+"."{letra}+{digito}* { return T_ERRO; }

. { return T_ERRO; }

<<EOF>> { return T_EOF; }

%%

void init(){
    // Name of tokens
    tokens_name[T_ID] = "id";
    tokens_name[T_NUMERO_INT] = "num int";
    tokens_name[T_NUMERO_REAL] = "num real";
    tokens_name[T_COMENTARIO] = "comentario"; // TODO: DELETE IT

    tokens_name[T_PONTO] = "simb_ponto";
    tokens_name[T_VIRGULA] = "simb_virgula";
    tokens_name[T_DOIS_PONTOS] = "simb_dois_pontos";
    tokens_name[T_PONTO_VIRGULA] = "simb_ponto_e_virgula";
    tokens_name[T_ABRE_PARENTESES] = "simb_abre_parenteses";
    tokens_name[T_FECHA_PARENTESES] = "simb_fecha_parenteses";

    tokens_name[T_PROGRAM] = "program";
    tokens_name[T_BEGIN] = "begin";
    tokens_name[T_END] = "end";

    tokens_name[T_VAR] = "var";
    tokens_name[T_CONST] = "const";

    tokens_name[T_INTEGER] = "integer";
    tokens_name[T_REAL] = "real";

    tokens_name[T_ERRO] = "erro";
    
    tokens_name[T_EOF] = "eof";


    // LALG keywords
    keywords["program"] = T_PROGRAM;
    keywords["begin"] = T_BEGIN;
    keywords["end"] = T_END;

    keywords["var"] = T_VAR;
    keywords["const"] = T_CONST;

    keywords["integer"] = T_INTEGER;
    keywords["real"] = T_REAL;
}


Pair next_token(){
    int token_type = yylex();

    Pair p;
    p.text = yytext;
    p.token = token_type;

    // Verify if the id is a keyword
    // map<string, int>::iterator it;
    // for (it = keywords.begin(); it != keywords.end(); it++){
    //     cout << it->first << " -> " << it->second << endl;
    // }

    if ( p.token == T_ID && keywords.find(p.text) != keywords.end() ){
        // cout << "ITS A KEYWORD!!!!" << endl;
        p.token = keywords[p.text];
    }

    return p;
}

int main()
{    
    init();

    int token = 0;
    while (1){
        Pair p = next_token();

        if (p.token == -1)
            break;

        cout << p.text << " - " << tokens_name[p.token] << endl;
    }

    return 0;
}


