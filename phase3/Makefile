parse: mini_l.lex mini_l.yy
	bison -v -d --file-prefix=parser mini_l.yy
	flex mini_l.lex
	g++ -std=c++11 -o parser parser.tab.cc lex.yy.c -lfl

clean:
	rm -f lex.yy.c parser.tab.* parser.output *.o parser location.hh position.hh stack.hh

oldclean:
	rm -f lex.yy.c y.tab.* y.output *.o parser


fibonacci:
	chmod +x mil_run
	cat fibonacci.min | ./parser > fibonacci.mil
	echo 5 > input.txt
	mil_run fibonacci.mil < input.txt	

simple:
	chmod +x mil_run
	cat simple.min | ./parser > mil_code.mil
	echo 5 > input.txt
	mil_run mil_code.mil < input.txt
