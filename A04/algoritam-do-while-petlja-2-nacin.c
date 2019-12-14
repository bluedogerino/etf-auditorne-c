#include <stdio.h>
int main()
{
  int n, b=1;
  do
  {
  printf("Unesite n: \n" );
  scanf("%d", &n); }
  while (n<1);
  do
    printf("Algoritam\n");
  while (++b <= n);
  return 0;
}
