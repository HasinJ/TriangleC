
all:
	gcc -g -Wall -Werror -fsanitize=address assignment1.c -o assignment1

clean:
	rm -f assignment1
