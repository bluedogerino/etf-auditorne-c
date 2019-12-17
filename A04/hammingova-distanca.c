#include <stdio.h>
#define MASKA 0x01
int main()
{
  unsigned int b;
  short hd = 0;
  printf("Unesite broj: ");
  scanf("%u", &b);
  while (b)
  {
    hd += b & MASKA;
    b >>= 1;
    printf("%d %d \n", hd, b );
  }
  printf("Hemingova distanca je %hd.", hd);
  return 0;
}
