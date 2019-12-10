#include <stdio.h>
int main()
{
    int broj, ost;
    printf("Unesite broj : ");
    scanf("%d", &broj);
    if (broj <= 0)
        printf("Nije prirodan!\n");
    else
    {
        ost = broj % 2;
        if (ost == 0)
            printf("Paran\n");
        else
            printf("Neparan\n");
    }
    return 0;
}
