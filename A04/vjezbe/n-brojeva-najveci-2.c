#include<stdio.h>

int main()
{
int n,i;
float c,big;

printf("Upisite broj elemenata");
scanf("%d", &n);
printf("Upisite %d brojeva :", n);
scanf("%f", &big);
for(i = 2; i <= n; i++)
{
    scanf("%f", &c);

    if(big < c)
        big = c;
}

printf("Najveci od %d broja je  %f ", n, big);
return 0;
}
