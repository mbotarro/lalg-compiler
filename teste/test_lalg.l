letter      [a-zA-Z]
digit       [0-9]
ident       "_"?{letter}({letter}|{digit}|"_"|"-")*
number      {digit}+

%%
 /* reserved tokens */
"program"                                   { printf("%s - s_program\n",    yytext); }
"begin"                                     { printf("%s - s_begin\n",      yytext); }
"end"                                       { printf("%s - s_end\n",        yytext); }
"var"                                       { printf("%s - s_var\n",        yytext); }
";"                                         { printf("%s - s_;\n",          yytext); }
":"                                         { printf("%s - s_:\n",          yytext); }
"integer"                                   { printf("%s - s_integer\n",    yytext); }
"real"                                      { printf("%s - s_real\n",       yytext); }
"("                                         { printf("%s - s_open_par\n",   yytext); }
")"                                         { printf("%s - s_close_par\n",  yytext); }
"."                                         { printf("%s - s_.\n",          yytext); }
","                                         { printf("%s - s_,\n",          yytext); }

 /* variable tokens */
{ident}                                     { printf("%s - id\n",           yytext); }
{number}                                    { printf("%s - num_int\n",      yytext); }
{number}["."]{number}+                      { printf("%s - num_real\n",     yytext); }

 /* one line comment */
"{"[^"}""\n"]*"}"                           ;
"\n"                                        ;
" "                                         ;

 /* errors */
{number}{ident}                             { printf("%s - error - id - bad formation\n",      yytext); }
(^{letter}){ident}                          { printf("%s - error - id - bad formation\n",      yytext); }
{number}["."](^{number})                    { printf("%s - error - num_real - bad formation\n", yytext); }

.                                           { printf("%s - error - unknown symbol\n", yytext); }

%%

int main()
{
	yylex();
	return 0;
}
