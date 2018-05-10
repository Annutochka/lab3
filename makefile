all: create bin/main

create:
	mkdir -p build
	mkdir -p bin

bin/main: build/main.o build/board.o build/board_print_plain.o
	gcc -Wall -Werror build/main.o build/board.o build/board_print_plain.o -o bin/main

build/main.o: src/main.c
	gcc -std=c99 -Wall -Werror -c src/main.c -o build/main.o

build/board.o: src/board.c
	gcc -std=c99 -Wall -Werror -c src/board.c -o build/board.o

build/board_print_plain.o: src/board_print_plain.c
	gcc -std=c99 -Wall -Werror -c src/board_print_plain.c -o build/board_print_plain.o

.PHONY : clean
clean:
	rm -rf build/*.o
