parse: 
	flex mini_l.lex
	bison -v -d --file-prefix=y mini_l.y
	gcc -o parse y.tab.c lex.yy.c -ll

clean:
	rm -f lex.yy.c y.tab.* y.output *.o parse

mk:
	bison -v -d --file-prefix=parser mini_l.y
	flex mini_l.lex
	g++ -std=c++11 -o parser parser.tab.cc lex.yy.c -lfl