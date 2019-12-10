#include <stdio.h>
int main()
{
    double a,O,P;
    printf("Unesite duzinu stranice kvadrata : ");
    scanf("%lf", &a);
    O=4*a;
    P=a*a;
    printf("Povrsina je %.2lf, a obim je %.2lf.", P, O );
    return 0;
}

