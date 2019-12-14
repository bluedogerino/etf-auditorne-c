#include <stdio.h>
int main() {
  char op;
  float x,y;
  printf("Unesite operaciju (+,-,*,/) :");
  scanf("%c", &op);
  printf("Prvi broj: x="); scanf("%f", &x);
  printf("Drugi broj: y="); scanf("%f", &y);
  switch (op) {
    case '+':
    printf("%.1f + %.1f = %.1f", x,y, x+y); break;
    case '-':
    printf("%.1f - %.1f = %.1f", x,y, x+y); break;
    case '*':
    printf("%.1f * %.1f = %.1f", x,y, x*y); break;
    case '/':
    printf("%.1f / %.1f = %.1f", x,y, x/y); break;
    default:
    printf("Greska");break;
  }

  return 0;
}
