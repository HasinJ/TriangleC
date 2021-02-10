#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void triangle(signed width)
{
  //printf("\noriginal:");

    for (size_t i = 0; i <= width; i++) {
      for (size_t j = 0; j < i; j++) putchar('*');
      putchar('\n');
    }
}

void v_triangle(signed width){
  //printf("\nupside down:\n");

  for (size_t i = width; i>0; i--) {
    for (size_t j = i; j>0; j--)  putchar('*');
    putchar('\n');
  }
}

void h_triangle(signed width){
  //printf("\nright side vertical:\n");

  for (size_t i = width; i>0; i--) {
    for (size_t k = width-i; k>0; k--) printf(" ");
    for (size_t j = i; j>0; j--) putchar('*');
    putchar('\n');
  }
}

int main(int argc, char const *argv[argc+1]) {
  //printf("%d\n", argc);
  if (argc<2 || argc>3) return EXIT_FAILURE;
  signed width = atoi(argv[1]);
  if (width<1) return EXIT_FAILURE;

  if (argc==2) triangle(width);
  else if (*argv[2]=='v' && strlen(argv[2])==1) v_triangle(width);
  else if (*argv[2]=='h' && strlen(argv[2])==1) h_triangle(width);
  else return EXIT_FAILURE;

  return EXIT_SUCCESS;
}
