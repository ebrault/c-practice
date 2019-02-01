#include <stdio.h>

int main() {
  int c, n1;

  n1 = 0;
  while ((c = getchar()) != EOF)
    printf("%d\n", c);
    if(c == ' ')
      putchar(c);
      ++n1;
  printf("%d\n", n1);
}
