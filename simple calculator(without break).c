#include<stdio.h>
int main(){
  int a,b;
  char oper;
  printf("Enter the number 1:");
  scanf("%d",&a);
  printf("Enter the number 2:");
  scanf("%d",&b);
  printf("Enter the operation(+,-,*,/):");
  scanf(" %c",&oper);
  switch(oper){
    case'+':
     printf("The sum is %d\n",a+b);
     
    case'-':
     printf("The subtraction is %d\n",a-b);
     
    case'*':
      printf("The multipliction is %d\n",a*b);
      
    case'/':
      printf("The division is %d\n",a/b);
      break;
    default:
      printf("Invalid operation\n");
  }
    
    
  }
