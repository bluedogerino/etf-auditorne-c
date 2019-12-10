#include <stdio.h>
int main()
{
    int broj1, broj2, broj3;
    printf("Unesite brojeve : ");
    scanf("%d %d %d", &broj1, &broj2, &broj3);
    if (broj1 < broj2 && broj1 < broj3)
        printf("Broj %d je najmanji!\n", broj1);
    else if (broj2 < broj3 && broj2 < broj1)
        printf("Broj %d je najmanji!\n", broj2);
    else
    {
        printf("Broj %d je najmanji!\n", broj3);
    }
    return 0;
}
