flex:
	flex lalg.l
	g++ -g lex.yy.c -lfl -o out

lex:
	lex lalg.l
	cc lex.yy.c -ll -o out

run:
	./out

input:
	./out < input.txt
