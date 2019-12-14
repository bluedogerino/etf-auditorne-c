#include <stdio.h>
int main()
{
  int broj,a,b;
  printf("Unesite broj : ");
  scanf("%d", &broj);
  if (broj > 0 && broj < 100)
  {
    a=broj/10;
    b=broj % 10;
    printf("%d\n", a+b);
  }
  else
  {
    printf("Greska!");
  }
  return 0;
}
