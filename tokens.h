#include<unordered_map>
#include<string>

using  namespace std; 

enum Tokens{
    T_EOF = -1,

    // User Tokens
    T_ID,
    T_NUM_INT,
    T_NUM_REAL,

    // Ponctuation Marks
    T_ABRE_PAR,
    T_FECHA_PAR,
    T_PT,
    T_VIR,
    T_DOIS_PTS,
    T_PT_VIR,

    // Assignment Operator
    T_ATRIB,

    // Relacional Operators
    T_IGUAL,
    T_DIF,
    T_MAIOR_IGUAL,
    T_MENOR_IGUAL,
    T_MAIOR,
    T_MENOR,

    // Arithmetic Operators
    T_MAIS,
    T_MENOS,
    T_MULT,
    T_DIV,

    // Keywords
    T_PROGRAM,
    T_CONST,
    T_VAR,
    T_REAL,
    T_INT,
    T_PROCEDURE,
    T_BEGIN,
    T_END,
    T_READ,
    T_WRITE,
    T_WHILE,
    T_DO,
    T_FOR,
    T_TO,
    T_IF,
    T_THEN,
    T_ELSE,

    // Errors
    T_ERRO,
};

/* 
    get_tokens_name returns an unsorted map that maps each token
    to a string that represents it 
*/ 
unordered_map<int, string> get_tokens_name();

/* 
    get_keywords returns an unsorted_map with the LALG keywords
*/
unordered_map<string, int> get_keywords();