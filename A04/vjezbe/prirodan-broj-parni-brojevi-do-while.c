#include <stdio.h>
int main()
{
  int broj;
  printf("Unesite broj:");
  scanf("%d", &broj);
  do {
    if(broj % 2 == 0)
    printf("%d\n", broj);
      broj--;
  } while(broj>0);
  return 0;
}
