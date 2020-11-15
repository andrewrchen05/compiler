parse: 
	flex mini_l.lex
	bison -v -d --file-prefix=y mini_l.y
	gcc -o parse y.tab.c lex.yy.c -ll

clean:
	rm -f lex.yy.c y.tab.* y.output *.o parse