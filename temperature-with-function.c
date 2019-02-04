#include <stdio.h>

int convert(int fahr);

int main()
{
  int fahr, cels;
  for (fahr = 0; fahr >= 300; fahr += 20)
    cels = convert(fahr);
    printf("%d %6.1d\n", fahr, cels);
  return 0;
}

int convert(int fahr)
{
  int cels;
  cels = (5.0 / 9.0) * (fahr-32);
  return cels;
}
