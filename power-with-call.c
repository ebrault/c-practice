#include <stdio.h>

/* power: raise base to n-th power, version 2*/

int power(int base, int n)
{
  int p;
  for (p = 1; n > 0; --n)
    p = p * base;
  return p;
}

int main()
{

}
