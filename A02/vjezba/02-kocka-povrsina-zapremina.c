#include <stdio.h>
int main()
{
    double a,V,P;
    printf("Unesite duzinu stranice kocke : ");
    scanf("%lf", &a);
    V=a*a*a;
    P=6*a*a;
    printf("Povrsina je %.2lf, a zapremina je %.2lf.", P, V );
    return 0;
}
