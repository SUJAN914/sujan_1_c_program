#include<stdio.h>
int main(){
  int x=10;
  int*ptr=&x;
printf("adress of x:%p\n",ptr);
  printf("value of x:%d\n",*ptr);
  return 0;
}
