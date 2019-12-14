#include <stdio.h>
int main()
{
  int a, n,stepen=1;
  printf("Unesite broj i stepen :" );
  scanf("%d %d", &a, &n);
  if (a<1 || n<0)
    printf("Pogresne vrijednosti!\n" );
  else
  {
    printf("%d je stepen broja %d je ", n, a );
  while (n--)
    stepen *= a;
    printf("%d.", stepen);
  }
  return 0;
}
