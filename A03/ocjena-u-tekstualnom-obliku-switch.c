#include <stdio.h>
int main()
{
  int ocjena;
  printf("Unesite ocjenu\n" );
  scanf("%d", &ocjena);
  switch(ocjena)
  {
  case 5:
  printf("Odlican\n" );
  break;
  case 4:
  printf("Vrlo Dobar\n" );
  break;
  case 3:
  printf("Dobar\n" );
  break;
  case 2:
  printf("Dovoljan\n" );
  break;
  case 1:
  printf("Nedovoljan\n" );
  default:
  printf("GRESKA\n" );
  break;
  }
  return 0;
}
