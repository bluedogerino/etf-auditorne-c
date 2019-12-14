#include <stdio.h>
int main()
{
  int dan;
  printf("Unesite redni broj dana u sedmici: ");
  scanf("%d", &dan);
  switch (dan) {
    case 1:
    printf("Ponedeljak\n");
    break;
    case 2:
    printf("Utorak\n");
    break;
    case 3:
    printf("Srijeda\n");
    break;
    case 4:
    printf("Cetvrtak\n");
    break;
    case 5:
    printf("Petak\n");
    break;
    case 6:
    printf("Subota\n");
    break;
    case 7:
    printf("Nedelja\n");
    break;
    default:
    printf("Greska\n");
    break;
  }
  return 0;
}
