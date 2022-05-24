compile: scanner.l parser.y
	flex scanner.l
	byacc -d parser.y
	gcc -o parser lex.yy.c y.tab.c -lfl
	./parser < ./test.c
all: 
	compile
