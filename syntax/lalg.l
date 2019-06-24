%{
    #include <string>
    #include <iostream>
    #include <unordered_map>
    #include "y.tab.h"

    using namespace std;

    unordered_map<string, int> get_keywords();

    static unordered_map<string, int> keywords = get_keywords();
%}

letra [a-zA-Z]
digito [0-9]

%%

 /* espaco vazio / comentario */
[ \t\n\f\r]+    ;
"{".*"}"        ;

 /* pontuacao */
"."             { cout << yytext << " - " << "PT\n"; return PT; }
","             { cout << yytext << " - " << "VIR\n"; return VIR; }
":"             { cout << yytext << " - " << "DOIS_PTS\n"; return DOIS_PTS; }
";"             { cout << yytext << " - " << "PT_VIR\n"; return PT_VIR; }
"("             { cout << yytext << " - " << "ABRE_PAR\n"; return ABRE_PAR; }
")"             { cout << yytext << " - " << "FECHA_PAR\n"; return FECHA_PAR; }

 /* atribuicao */
":="            { cout << yytext << " - " << "ATRIB\n"; return ATRIB;}

 /* operadores relacionais */
"="             { cout << yytext << " - " << "IGUAL\n"; return IGUAL; }
"<>"            { cout << yytext << " - " << "DIF\n"; return DIF; }
">="            { cout << yytext << " - " << "MAIOR_IGUAL\n"; return MAIOR_IGUAL; }
"<="            { cout << yytext << " - " << "MENOR_IGUAL\n"; return MENOR_IGUAL; }
">"             { cout << yytext << " - " << "MAIOR\n"; return MAIOR; }
"<"             { cout << yytext << " - " << "MENOR\n"; return MENOR; }

 /* operadores aritimeticos */
"+"             { cout << yytext << " - " << "MAIS\n"; return MAIS; }
"-"             { cout << yytext << " - " << "MENOS\n"; return MENOS; }
"*"             { cout << yytext << " - " << "MULT\n"; return MULT; }
"/"             { cout << yytext << " - " << "DIV\n"; return DIV; }

 /* variaveis de usuario */
{letra}{1,16}                       {
                                        if(keywords.find(yytext) != keywords.end()) {
                                            string s = yytext;
                                            for (int i = 0; i < s.length(); i++)
                                                s[i] = toupper(s[i]);
                                            cout << yytext << " - " << s << endl;
                                            return keywords[yytext];
                                        }
                                        else{
                                            cout << yytext << " - " << "ID\n";
                                            return ID;
                                        }
                                    } 
{letra}({letra}|{digito}|_){0,15}   { cout << yytext << " - " << "ID\n"; return ID; }
{digito}+                         { cout << yytext << " - " << "NUM_INT\n"; return NUM_INT; }
{digito}+"."{digito}+             { cout << yytext << " - " << "NUM_REAL\n"; return NUM_REAL; }

 
{letra}{17,}                                            			{ cout << "LEXICO: erro_tamanho_maximo" << endl; }
"-"?{digito}+([a-zA-Z_]+{digito}*)+                     			{ cout << "LEXICO: erro_numero_inteiro_mal_formado" << endl; }
[^a-zA-Z0-9 "{""("\n"+""-""*""/""="">""<""."]+({letra}|{digito})+  	{ cout << "LEXICO: erro_id_mal_formado" << endl; }
"-"?{digito}+({letra}|{digito})*"."({digito}*{letra}+)*			    { cout << "LEXICO : erro_numero_real_mal_formado" << endl; }
"-"?{digito}+({letra}+{digito}*)*"."({digito}|{letra})* 			{ cout << "LEXICO : erro_numero_real_mal_formado" << endl; }
"-"?"."{digito}+					  			                    { cout << "LEXICO : erro_numero_real_mal_formado" << endl; }
"{".*[^"}"]\n                                           			{ cout << "LEXICO : erro_comentario_mal_formado" << endl; }
.                                                       			{ cout << "LEXICO : erro_simbolo_nao_reconhecido" << endl; }

%%

unordered_map<string, int> get_keywords(){
    unordered_map<string, int> keywords;

    keywords["program"] = PROGRAM;
    keywords["const"] = CONST;
    keywords["var"] = VAR;
    keywords["real"] = REAL;
    keywords["integer"] = INT;
    keywords["procedure"] = PROCEDURE;
    keywords["begin"] = T_BEGIN;
    keywords["end"] = T_END;
    keywords["read"] = READ;
    keywords["write"] = WRITE;
    keywords["while"] = WHILE;
    keywords["do"] = DO;
    keywords["for"] = FOR;
    keywords["to"] = TO;
    keywords["if"] = IF;
    keywords["then"] = THEN;
    keywords["else"] = ELSE;

    return keywords;
}
