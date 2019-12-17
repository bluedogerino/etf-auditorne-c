#include <stdio.h>
int main()
{
  int dx,A,B;
  printf("Unesite delta x:\n");
  scanf("%d", &dx);
  do
  {
    printf("Unesite A i B:\n" );
    scanf("%d %d", &A, &B );
  }
  while (B<A);
  printf("===============\n");
  printf("x  f(x)\n");
  printf("===============\n");
  for( int x=A; x<=B; x=x+dx){
    printf("%d  %d\n", x, 2*x+3 );
  }
  return 0;
}
