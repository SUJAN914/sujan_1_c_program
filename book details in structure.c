#include<stdio.h>
struct Book {
    char name[100];
    char author[50];
    int publyear;
};
int main() {
    struct Book book1;
    printf("Enter the name of the book:");
    scanf("%s", book1.name);
    printf("Enter the name of the author:");
    scanf("%s", book1.author);
    printf("Enter the publish year:");
    scanf("%d", &book1.publyear);
    printf("\nBook Details:\n");
    printf("Name: %s\nAuthor Name:%s\nPublish Year:%d\n",book1.name,book1.author,book1.publyear);
    return 0;
}
