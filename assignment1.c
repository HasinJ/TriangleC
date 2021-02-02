#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void triangle(unsigned width)
{
    for (size_t i = 0; i <= width; i++) {
      for (size_t j = 0; j < i; j++) putchar('*');
      putchar('\n');
    }
}

void v_triangle(unsigned width){
  printf("\nupside down:\n");

  for (size_t i = width; i>0; i--) {
    for (size_t j = i; j>0; j--){
      putchar('*');
    }
    putchar('\n');
  }
}

int main(int argc, char const *argv[argc+1]) {
  triangle(atoi(argv[1]));
  v_triangle(atoi(argv[1]));
}
