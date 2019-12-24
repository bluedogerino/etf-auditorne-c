#include <stdio.h>
int main()
{
  unsigned char i;
  char tekst[4];
  short niz[4];
  for (i = 0; i < 4; ++i)
    tekst[i] = 'a' + i;
  for (i = 0; i < 4; ++i)
    niz[i] = 2 * i + 2;
  for (i = 0; i < 4; ++i)
    printf("%c", tekst[i]);
  printf("\n");
  for (i = 0; i < 4; ++i)
    printf("%d", niz[i]);
  return 0;
}
