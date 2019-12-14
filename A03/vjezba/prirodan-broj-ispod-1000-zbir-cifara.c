#include <stdio.h>
int main()
{
  int broj,a,b,c;
  printf("Unesite broj : ");
  scanf("%d", &broj);
  if (broj >0 && broj < 1000)
  {
    a=broj/100;
    b=(broj % 100)/10;
    c=(broj % 100) % 10 ;
    printf("%d\n", a+b+c);
  }
  else
  {
    printf("Greska!");
  }
  return 0;
}
