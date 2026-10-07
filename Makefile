compile:
	gcc -o main.o main.c -lncurses -lpanel

run:
	./main.o

clean:
	rm -rf ./main.o

.PHONY: compile run clean
