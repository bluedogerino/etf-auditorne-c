#include <stdio.h>
int main()
{
  float radijani,stepeni;
  printf("Unesite ugao u radijanima : ");
  scanf("%f", &radijani);
  stepeni=radijani*(180/3.14);
  printf("Ugao u stepenima je : %.2f\n", stepeni);
  return 0;
}
