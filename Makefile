build:
	@flex lalg.l
	@g++ -g lex.yy.c -lfl -o out

test1: build
	@./out < testes/exemplo1.txt

test2: build
	@./out < testes/exemplo2.txt

test3: build
	@./out < testes/exemplo3.txt
