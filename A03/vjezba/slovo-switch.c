#include <stdio.h>
int main()
{
  char slovo;
  printf("Unesite slovo : ");
  scanf("%c", &slovo);
  switch (slovo)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("Samoglasnik\n");
    break;
    default:
    printf("Suglasnik\n");
    break;
  }
  return 0;
}
