#include <stdio.h>
int main()
{
  int mjesec,godina,god ;
  printf("Unesite redni broj mjeseca i godinu : ");
  scanf("%d %d", &mjesec , &godina);
  if (godina % 4 == 0 && godina % 100 != 0 || godina % 400 == 0)
  god = 1;
  else
  god = 0;
  switch (mjesec) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("31 dana\n");
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("30 dana\n");
    break;
    case 2:
    {if (god == 1)
    printf("29 dana\n");
    else
    printf("28 dana\n");
    break;}
    default:
    printf("Greska\n");
    break;
  }
  return 0;
}
