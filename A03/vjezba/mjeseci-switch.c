#include <stdio.h>
int main()
{
  int mjesec;
  printf("Unesite redni broj mjeseca : ");
  scanf("%d", &mjesec);
  switch (mjesec) {
    case 1:
    printf("Januar\n");
    break;
    case 2:
    printf("Februar\n");
    break;
    case 3:
    printf("Mart\n");
    break;
    case 4:
    printf("April\n");
    break;
    case 5:
    printf("Maj\n");
    break;
    case 6:
    printf("Jun\n");
    break;
    case 7:
    printf("Jul\n");
    break;
    case 8:
    printf("Avgust\n");
    break;
    case 9:
    printf("Septembar\n");
    break;
    case 10:
    printf("Oktobar\n");
    break;
    case 11:
    printf("Novembar\n");
    break;
    case 12:
    printf("Decembar\n");
    break;
    default:
    printf("Greska\n");
    break;
  }
  return 0;
}
