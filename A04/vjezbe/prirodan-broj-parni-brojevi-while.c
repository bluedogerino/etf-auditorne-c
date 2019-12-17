#include <stdio.h>
int main()
{
  int broj;
  printf("Unesite broj:");
  scanf("%d", &broj);
  while (broj>0) {
  if(broj % 2 == 0)
  printf("%d\n", broj);
    broj--;
  }
  return 0;
}
