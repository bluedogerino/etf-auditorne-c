#include <stdio.h>
int main()
{
  int x,y,p,ost;
  do {
    printf("Unesite x i y: \n");
    scanf("%d %d", &x, &y);
  } while(x<1 || y<1);
  printf("NZD (%d, %d)\n", x, y );
  do {
    p=x;
    x=y;
    y=p;
  } while(x<y);
  do {
    ost=x%y;
    x=y;
    y=ost;
  } while(y>0);
  printf("%d\n", x);
  return 0;
}
