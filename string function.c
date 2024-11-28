#include <stdio.h>
#include <string.h>
int main() {
  char firstName[] = "sujan";
  char lastName[] = "reddy";
  char fullName[50]; 
  strcpy(fullName, firstName);  
  strcat(fullName, " ");     
  strcat(fullName, lastName); 
  strcmp("sujan","reddy");
 printf("Full Name: %s\n", fullName);
int length = strlen(fullName);
  printf("Length of the full name: %d\n", length);
  return 0;
}
