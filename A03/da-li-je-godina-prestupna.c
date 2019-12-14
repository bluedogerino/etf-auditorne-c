#include <stdio.h>
int main()
{
  int god;
  printf("Unesite godinu:");
  scanf("%d", &god );
  if (god % 400 == 0) {
    printf("Godina jeste prestupna.\n");  }
  else {
    if (god % 100 == 0)
      printf("Godina nije prestupna.\n");
    else if (god % 4 == 0)
    printf("Godina je prestupna\n");
    else
  printf("Godina nije prestupna.\n");
      }
}
