#include <stdio.h>
union book{
int num;
char name[1];
float price;
};
int main()
{
  union book hp;
  hp.num=50620331;
  hp.price=1.0;
  strcpy(hp.name,"harry potter");
  printf("book number ; %d\n",hp.num);
  printf("book name; %s\n",hp.name);
  printf("book price; %f\n",hp.price);
}
    
    
