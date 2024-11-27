#include <stdio.h>
 int main() {
     int numbers[5] = {10, 20, 30, 40, 50};
     printf("Elements of the array:\n");
     for (int i = 0; i < 5; i++) {
         printf("%d ", numbers[i]);
     }
     return 0;
 }
