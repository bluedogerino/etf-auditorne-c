#include <stdio.h>
int main()
{
  int broj;
  printf("Unesite broj:");
  scanf("%d", &broj);
  for (; broj>0; broj--) {
    if(broj % 2 == 0)
    printf("%d\n", broj);
    }
  return 0;
}
