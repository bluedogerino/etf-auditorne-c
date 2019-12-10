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
    zbir=stepeni+minute2/60+sekunde2/3600;
    printf("Ugao je %f", zbir );
    return 0;
}
