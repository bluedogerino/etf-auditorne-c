#include <stdio.h>
int main()
{
    float radijani, pi=3.14159265359;
    scanf("%f", &radijani);
    float stepeni=radijani*(180/pi);
    printf("%f\n", stepeni);
    int stepen,minute;
    stepen=(int)stepeni;
    printf("stepen: %d\n", stepen);
    minute=(stepeni-stepen)*60;
    printf("minute : %d\n", minute);
    float sekunde=((stepeni-stepen)-(minute/60.0))*3600;
    printf("sekunde :%f\n", sekunde);
    return 0;
}
