#include <stdio.h>
int main()
{
  int b, f = 2;
  do
  {
    printf("Unesite broj: ");
    scanf("%d", &b);
    //*unos broja*//
  }
  while (b < 1);
  printf("%d=1", b);
  //*broj je jednak*//
  while (f <= b)
  {
    if (b % f == 0)
    { printf("*%d", f); b /= f;
    //*prati djelioca i ispisuje taj broj*//
    }
    else f++;
    //*u slucaju da se iz b/f dobije ostatak dodati 1 djeliocu*//
  }
  return 0;
}
