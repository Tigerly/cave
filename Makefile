all:
	g++ lisp.cpp -o repl

.PHONY: clean
clean:
	rm repl
