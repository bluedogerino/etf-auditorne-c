#include <stdio.h>
int main()
{
  int n,f=1;
  printf("Unesite n:" );
  scanf("%d", &n);
  printf("%d! =", n);
  while (n) {
    f *= n;
    n--;
  }
    printf("%d", f);
  return 0;
}
