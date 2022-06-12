#include<stdio.h>
#include<string.h>
struct product{
    char name[20];
    double price;
};
void printProductInfo(struct product p){
    printf("Product name : %s\n",p.name);
    printf("Product price : %.2lf\n",p.price);
}
int main(){
    struct product myProduct;
    strcpy(myProduct.name,"Non-Marking Shoes");
    myProduct.price=850;
    printProductInfo(myProduct);
}