#include <stdio.h>
#include <math.h>
int main()
{
  int b, d=1, p;
  printf("Unesite broj: ");
  scanf("%d", &b);
  if (b < 2)
    printf("Greska!");
  else
  {
    p = (b==2) || (b%2);
    while (p && (d+=2) <= sqrt(b))
      p = b % d;
    printf("Broj %d %s prost.", b, (p ? "je":"nije"));
  }
  return 0;
}
