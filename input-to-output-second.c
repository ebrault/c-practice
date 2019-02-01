#include <stdio.h>

/* Copy input to output, second version */

int main()
{
  int c;

  while((c = getchar()) != EOF) {
    printf("%d/n", c);
    putchar(c);
    printf("%d/n", EOF); 
  }
}
