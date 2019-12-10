#include <stdio.h>
int main()
{
    int stepeni,minute,sekunde;
    printf("Unesite ugao u formi stepen minut sekund : ");
    scanf("%d %d %d", &stepeni, &minute, &sekunde);
    stepeni=stepeni+minute/60+sekunde/3600;
    float minute2=minute % 60;
    float sekunde2=sekunde % 3600;
    float zbir;
    float pi=3.14;
    float radijani;
    zbir=stepeni+minute2/60+sekunde2/3600;
    radijani=zbir*(pi/180);
    printf("Ugao je %.4f u stepenima i %.4f u radijanima", zbir, radijani );
    return 0;
}
