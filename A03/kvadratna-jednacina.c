#include <stdio.h>
#include <math.h>
int main()
{
  double a,b,c,x1,x2,d,rd,id;
  printf("Unesite parametre a,b i c\n" );
  scanf("%lf %lf %lf", &a , &b, &c);
  if (a == 0)
  {
    if (b ==0)
    printf("Jednacina nije validna\n" );
    else
    {
      x1=-c/b;
      printf("Rjesenje: x=%.4f\n", x1 );
    }
    if (d<0)
    {
      rd = -b / (2*a);
      id = sqrt(-d)/(2*a);
      printf("Rjesenja su: \n" );
      printf("x1=%.4f+%.4f*i \n", rd, id );
      printf("x2=%.4f-%.4f*i \n", rd, id );
    }
    }
    else
    {
      if(d == 0)
      {
        x1= -b/(2*a);
        printf("Rjesenja su : x1=x2=%.4f \n", x1);
      }
      else
      {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("Rjesenja su: \n" );
        printf("x1=%.4f, x2=%.4f \n", x1, x2);
      }
    }
  return 0;
}
