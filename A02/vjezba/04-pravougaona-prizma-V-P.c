#include <stdio.h>
int main()
{
    float a,b,c,V,P;
    printf("Unesite duzine stranica prizme : ");
    scanf("%f %f %f", &a, &b, &c);
    V=a*b*c;
    P=2*(a*b+a*c+b*c);
    printf("Povrsina je %.2f ,zapremina je %.2f.", P, V );
    return 0;
}
