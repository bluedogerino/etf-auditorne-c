#include <stdio.h>
int main()
{
  int n;
  printf("Unesite broj manji od 1000: ");
  scanf("%d", &n);
  if (n<1 || n>999)
  printf("Greska!\n");
  else {
    n=n/10;
    if (n == 0 )
    printf("Jednocifren");
    else
    {
      n=n/10;
      if(n == 0)
      printf("Dvocifren\n");
      else
      printf("Trocifren");
    }
  }
  return 0;
}
