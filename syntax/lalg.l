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
"."             { cout << "PT\n"; return PT; }
","             { cout << "VIR\n"; return VIR; }
":"             { cout << "DOIS_PTS\n"; return DOIS_PTS; }
";"             { cout << "PT_VIR\n"; return PT_VIR; }
"("             { cout << "ABRE_PAR\n"; return ABRE_PAR; }
")"             { cout << "FECHA_PAR\n"; return FECHA_PAR; }

 /* atribuicao */
":="            { cout << "ATRIB\n"; return ATRIB;}

 /* operadores relacionais */
"="             { cout << "IGUAL\n"; return IGUAL; }
"<>"            { cout << "DIF\n"; return DIF; }
">="            { cout << "MAIOR_IGUAL\n"; return MAIOR_IGUAL; }
"<="            { cout << "MENOR_IGUAL\n"; return MENOR_IGUAL; }
">"             { cout << "MAIOR\n"; return MAIOR; }
"<"             { cout << "MENOR\n"; return MENOR; }

 /* operadores aritimeticos */
"+"             { cout << "MAIS\n"; return MAIS; }
"-"             { cout << "MENOS\n"; return MENOS; }
"*"             { cout << "MULT\n"; return MULT; }
"/"             { cout << "DIV\n"; return DIV; }

 /* variaveis de usuario */
{letra}{1,16}                       {
                                        if(keywords.find(yytext) != keywords.end()) {
                                            string s = yytext;
                                            for (int i = 0; i < s.length(); i++)
                                                s[i] = toupper(s[i]);
                                            cout << s << endl;
                                            return keywords[yytext];
                                        }
                                        else{
                                            cout << "ID\n";
                                            return ID;
                                        }
                                    } 
{letra}({letra}|{digito}|_){0,15}   { cout << "ID\n"; return ID; }
-?{digito}+                         { cout << "NUM_INT\n"; return NUM_INT; }
-?{digito}+"."{digito}+             { cout << "NUM_REAL\n"; return NUM_REAL; }

 /*
{letra}{17,}                                            			{ return T_ERRO_TAM_MAX; }
"-"?{digito}+([a-zA-Z_]+{digito}*)+                     			{ return T_ERRO_NUM_INT_MAL_FORM; }
[^a-zA-Z0-9 "{""("\n"+""-""*""/""="">""<""."]+({letra}|{digito})+  		{ return T_ERRO_ID_MAL_FORM; }
"-"?{digito}+({letra}|{digito})*"."({digito}*{letra}+)*			{ return T_ERRO_NUM_REAL_MAL_FORM; }
"-"?{digito}+({letra}+{digito}*)*"."({digito}|{letra})* 			{ return T_ERRO_NUM_REAL_MAL_FORM; }
"-"?"."{digito}+					  			{ return T_ERRO_NUM_REAL_MAL_FORM; }
"{".*[^"}"]\n                                           			{ return T_ERRO_COMENT_MAL_FORM; }
.                                                       			{ return T_ERRO_SIM_N_REC; }

 */

<<EOF>> { return T_EOF; }
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
    keywords["end"] = END;
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