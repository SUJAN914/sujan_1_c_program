#include <stdio.h>
#include<string.h>
int main() {
int num,reversed=0,remainder,original;
  printf("enter the integer");
  scanf("%d",&num);
  original=num;
  while(num!=0){
    remainder=num%10;
  reversed=reversed*10+remainder;
  num/=10;
}
if (original==reversed) {
printf("%d is a paliandrome.\n",original);
} else {
  printf("%d is not a palindrome.\n",original);
}
return 0;
}
