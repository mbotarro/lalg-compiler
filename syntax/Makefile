build:
	yacc -dtv lalg.y
	flex lalg.l
	g++ -g lex.yy.c y.tab.c -lfl -o out

test: build
	@./out < testes/test1.txt

run: build
	@./out
