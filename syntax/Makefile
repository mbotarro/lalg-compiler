build:
	yacc -dtv lalg.y
	flex lalg.l
	# g++ -g lex.yy.c y.tab.c -lfl -o out
	#  if having trouble with undifined reference to yylex in linux:
	g++ -g lex.yy.c y.tab.c -l:libfl.a -o out
test: build
	@./out < testes/t1.txt

run: build
	@./out
