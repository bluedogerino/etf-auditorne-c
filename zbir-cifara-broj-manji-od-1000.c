#include <stdio.h>
int main()
{
    int broj,n,s=0;
    do
    {
    printf("Unesite broj : ");
    scanf("%d", &broj);
    }
    while (broj < 1 || broj > 999);
    n=broj;
    while(n>0)
    {
        int cifra;
        cifra = n % 10;
        s =  s + cifra;
        n = n/10;
    }
    printf("Zbir cifara broja %d je %d", broj, s);
    return 0;
}
