#include <stdio.h>
int main()
{
  int broj, d, s;
  printf("Unesite broj: ");
  scanf("%d", &broj);
  if (broj < 1)
    printf("Broj nije prirodan!");
  else
  {
    for (s=0, d=1; d <= broj / 2; d++)
    {
    printf("prije:%d %d %d \n", d,s,broj);
      s += (broj%d)? 0 : d;
      printf("poslije: %d %d %d \n", d,s,broj);
}
      printf("Broj %d %s savrsen.\n",
      broj, (broj == s ? "je" : "nije"));
  }
  return 0;
}
