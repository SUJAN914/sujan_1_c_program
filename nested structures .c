#include <stdio.h>
struct adress {
  char city[50];
  int pin;
};
struct person {
  char name[50];
  struct adress addr;
};
int main() {
  struct person p;
  printf("enter name");
  scanf("%s", p.name);
  printf("enter city");
  scanf("%s", p.addr.city);
  printf("enter pin");
  scanf("%d", &p.addr.pin);
  printf("\npetson deatils:\n");
  printf("name:%s\ncity:%s\npin:%d\n", p.name, p.addr.city, p.addr.pin);
  return 0;
}
