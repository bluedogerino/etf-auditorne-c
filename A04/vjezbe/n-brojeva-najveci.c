#include <stdio.h>
int main()
{
    int n,a;
    float b,najveci;
    printf("Unesite n brojeva: ");
    scanf("%d", &n);
    for (n = 0; a <= n; a++) {
      scanf("%d", n);
      if (najveci>n) {
        najveci=n;
      }
    }

    printf("Najveci je %f. \n", najveci);
    return 0;
}
