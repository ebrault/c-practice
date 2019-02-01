#include <stdio.h>

int main()
{
  int c, tl, bl, sl;

  tl = 0;
  bl = 0;
  sl = 0;
  while((c = getchar()) != EOF)
    if(c == '\t')
      printf("\\t");
    else if (c == '\b')
      printf("\\b");
    else if (c == '\\')
      printf("\\\\");
    else
      printf("%c", c);
}
