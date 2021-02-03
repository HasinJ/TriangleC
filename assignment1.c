#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void triangle(unsigned width)
{
  printf("\noriginal:");

    for (size_t i = 0; i <= width; i++) {
      for (size_t j = 0; j < i; j++) putchar('*');
      putchar('\n');
    }
}

void v_triangle(unsigned width){
  printf("\nupside down:\n");

  for (size_t i = width; i>0; i--) {
    for (size_t j = i; j>0; j--)  putchar('*');
    putchar('\n');
  }
}

void h_triangle(unsigned width){
  printf("\nright side vertical:\n");

  for (size_t i = width; i>0; i--) {
    for (size_t k = width-i; k>0; k--) printf(" ");
    for (size_t j = i; j>0; j--) putchar('*');
    putchar('\n');
  }
}

int main(int argc, char const *argv[argc+1]) {
  //printf("%d\n", argc);
  if (argc!=2) return EXIT_FAILURE;
  unsigned width = atoi(argv[1]);
  triangle(width);
  v_triangle(width);
  h_triangle(width);
  return EXIT_SUCCESS;
}
