#include "tokens.h"

unordered_map<int, string> get_tokens_name(){
    unordered_map<int, string> tokens_name;
    
    tokens_name[T_ID] = "id";
    tokens_name[T_NUM_INT] = "num_int";
    tokens_name[T_NUM_REAL] = "num_real";

    tokens_name[T_ABRE_PAR] = "s_abre_parenteses";
    tokens_name[T_FECHA_PAR] = "s_fecha_parenteses";
    tokens_name[T_PT] = "s_ponto";
    tokens_name[T_VIR] = "s_virgula";
    tokens_name[T_DOIS_PTS] = "s_dois_pontos";
    tokens_name[T_PT_VIR] = "s_ponto_virgula";

    tokens_name[T_ATRIB] = "s_atribuicao";

    tokens_name[T_IGUAL] = "s_igual";
    tokens_name[T_DIF] = "s_diferente";
    tokens_name[T_MAIOR_IGUAL] = "s_maior_igual";
    tokens_name[T_MENOR_IGUAL] = "s_menor_igual";
    tokens_name[T_MAIOR] = "s_maior";
    tokens_name[T_MENOR] = "s_menor";

    tokens_name[T_MAIS] = "s_mais";
    tokens_name[T_MENOS] = "s_menos";
    tokens_name[T_MULT] = "s_multiplicacao";
    tokens_name[T_DIV] = "s_divisao";
    
    tokens_name[T_PROGRAM] = "r_program";
    tokens_name[T_CONST] = "r_const";
    tokens_name[T_VAR] = "r_var";
    tokens_name[T_REAL] = "r_real";
    tokens_name[T_INT] = "r_integer";
    tokens_name[T_PROCEDURE] = "r_procedure";
    tokens_name[T_BEGIN] = "r_begin";
    tokens_name[T_END] = "r_end";
    tokens_name[T_READ] = "r_read";
    tokens_name[T_WRITE] = "r_write";
    tokens_name[T_WHILE] = "r_while";
    tokens_name[T_DO] = "r_do";
    tokens_name[T_FOR] = "r_for";
    tokens_name[T_TO] = "r_to";
    tokens_name[T_IF] = "r_if";
    tokens_name[T_THEN] = "r_then";
    tokens_name[T_ELSE] = "r_else";

    tokens_name[T_ERRO] = "error";  

    return tokens_name; 
}

unordered_map<string, int> get_keywords(){
    unordered_map<string, int> keywords;

    keywords["program"] = T_PROGRAM;
    keywords["const"] = T_CONST;
    keywords["var"] = T_VAR;
    keywords["real"] = T_REAL;
    keywords["integer"] = T_INT;
    keywords["procedure"] = T_PROCEDURE;
    keywords["begin"] = T_BEGIN;
    keywords["end"] = T_END;
    keywords["read"] = T_READ;
    keywords["write"] = T_WRITE;
    keywords["while"] = T_WHILE;
    keywords["do"] = T_DO;
    keywords["for"] = T_FOR;
    keywords["to"] = T_TO;
    keywords["if"] = T_IF;
    keywords["then"] = T_THEN;
    keywords["else"] = T_ELSE;

    return keywords;
}
