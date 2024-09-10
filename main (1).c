#include <stdio.h>

int main(void)
{
  int a, b;
  char oper;

  printf("Enter the number 1:");
  scanf("%d", &a);
  printf("Enter the number 2:");
  scanf("%d", &b);
  printf("enter the operator(''+,-,*,/'): ");
  scanf(" %c", &oper);

  switch(oper){
    case '+':
      printf("the sum is %d\n", a+b);
      break;
    case '-':
      printf("the difference is %d\n", a-b);
      break;
    case '*':
      printf("the product is %d\n", a*b);
      break;
    case '/':
      if (b != 0){
          printf("the division is %d\n", a/b);

      }else {
          printf("the division is not possible\n");
      }
      break;
    default:
      printf("Invalide operator\n");
    }
    return 0;
}