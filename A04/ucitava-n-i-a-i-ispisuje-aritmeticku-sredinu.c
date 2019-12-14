#include <stdio.h>
int main()
{
  int i, n ,b ,s = 0;
  do {
    printf("Unesite broj:" );
    scanf("%d", &n);
  }
  while(n < 1);
  for (i = 1; i <= n; i++)
  {
    printf("%d. broj: ", i);
    scanf("%d", &b);
    s += b;
  }
  printf("aritmeticka sredina je : %6.2f .", (float)s / n);
  return 0;
}
