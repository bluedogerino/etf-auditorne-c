#include <stdio.h>
int main()
{
    float celsijus,kelvin;
    printf("Unesite temperaturu u C (celsijusu) : ");
    scanf("%f", &celsijus);
    kelvin=celsijus+273.15;
    printf("Temperatura u Kelvinima je %.2f", kelvin );
    return 0;
}
