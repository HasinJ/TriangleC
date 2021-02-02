#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void triangle(unsigned width)
{
    unsigned i, j;

    i = 0;
    while (i <= width) {
        j = 0;
        while (j < i) {
            putchar('*');
            ++j;
        }
        putchar('\n');
        ++i;
    }
}


int main(int argc, char const *argv[argc+1]) {
  triangle(atoi(argv[1]));
}
