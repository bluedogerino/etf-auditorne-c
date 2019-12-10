#include <stdio.h>
int main()
{
    int stepen,minut,sekunde;
    printf("Unesite ugao u formi stepen minut sekund : ");
    scanf("%d %d %d", &stepen, &minut, &sekunde);
    stepen=stepen+minut/60+sekunde/3600;
    minut=minut % 60;
    sekunde=sekunde % 3600;
    printf("Ugao je %d %d %d", stepen, minut, sekunde );
    return 0;
}

