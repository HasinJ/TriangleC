#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void triangle(unsigned width)
{
    unsigned i, j;

    printf("mine:");
    for (size_t i = 0; i <= width; i++) {
      for (size_t j = 0; j < i; j++) putchar('*');
      putchar('\n');
    }

    i = 0;
    printf("\noriginal:");
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
