#include <stdio.h>
int main()
{
    int br_pozitivnih=0,br=0,sum=0,n,broj;
    printf("Unesite broj brojeva: ");
    scanf("%d", &n);
    while (n>0) {
    scanf("%d", &broj);
    if (broj>0)
        br_pozitivnih+=1;
    sum=sum+broj;
    br++;
    n--;
    }
    printf("Pozitivnih ima %d. \n", br_pozitivnih);
    double as=(double)sum/br;
    printf("Aritmeticka sredina : %lf . \n", as );
    return 0;
}
