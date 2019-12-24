#include <stdio.h>
int main()
{
  int n,a, b=0, najmanji,brojac=0;
  printf("Unesite n brojeva: ");
  scanf("%d", &n);
  for (a = 1; a <= n; a++) {
    scanf("%d", &b);
    if (b<najmanji) {
      najmanji=b;
      brojac++;
    }
  }
  printf("Najmanji je %d i to je redni broj %d.\n", najmanji, brojac);
}
