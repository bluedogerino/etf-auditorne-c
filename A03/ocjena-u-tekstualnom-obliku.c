#include <stdio.h>
int main()
{
  int ocjena;
  printf("Unesite ocjenu\n" );
  scanf("%d", &ocjena);
  if (ocjena == 5)
  printf("Odlican\n" );
  else if (ocjena == 4)
  printf("Vrlo Dobar\n" );
  else if (ocjena == 3)
  printf("Dobar\n" );
  else if (ocjena == 2)
  printf("Dovoljan\n" );
  else if (ocjena ==1 )
  printf("Nedovoljan\n" );
  else
  printf("GRESKA\n" );
  return 0;
}
