CFLAGS = -g -Wall -ansi -pedantic

parse:  mini_l.lex mini_l.yy
	bison -v -d --file-prefix=parser mini_l.yy
	flex mini_l.lex
	g++ $(CFLAGS) -std=c++11 -o parser parser.tab.cc lex.yy.c -ll

clean:
	rm -f lex.yy.c parser.tab.* parser.output *.o parser location.hh position.hh stack.hh

oldclean:
	rm -f lex.yy.c y.tab.* y.output *.o parser

testrun:
	cat test.min | ./parser > mil_code.mil
	mil_run mil_code.mil

fibonacci:
	cat fibonacci.min | ./parser > mil_code.mil
	echo 5 > input.txt
	mil_run mil_code.mil < input.txt

simple:
	cat simple.min | ./parser > mil_code.mil
	mil_run mil_code.txt








