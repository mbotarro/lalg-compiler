build:
	@flex lalg.l
	@g++ -g lex.yy.c tokens.cpp -lfl -o out

test: build
	@./out < testes/test1.txt
