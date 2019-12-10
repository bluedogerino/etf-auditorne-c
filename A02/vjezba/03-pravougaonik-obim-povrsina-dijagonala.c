#include <stdio.h>
int main()
{
    float a,b,O,P,d,d2;
    printf("Unesite duzine stranica pravougaonika : ");
    scanf("%f %f", &a, &b);
    O=2*(a+b);
    P=a*b;
    d2=((a*a)+(b*b));
    d=(pow(d2,0.5));
    printf("Povrsina je %.2f ,obim je %.2f , a dijagonala je %.2f .", P, O, d );
    return 0;
}
