#include<stdio.h>
#include<string.h>
struct book{
    int id;
    char title[100],author[100];
};
int main(){
    struct book book1,book2;
    book1.id=101;
    strcpy(book1.title,"C Programming Hand Note");
    strcpy(book1.author,"Mukla.C");
    book2.id=102;
    strcpy(book2.title,"Programming with Fun");
    strcpy(book2.author,"Joy Billah");
    printf("\n\n**Book1 Information**\n\n");
    printf("ID : %d\n",book1.id);
    printf("Title : %s\n",book1.title);
    printf("Author : %s\n",book1.author);
    printf("\n**Book2 Information**\n\n");
    printf("ID : %d\n",book2.id);
    printf("Title : %s\n",book2.title);
    printf("Author : %s\n",book2.author);
}   