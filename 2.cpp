//Q2 - Write a program to find the product of 2 numbers using pointers
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int *ptra=&a;
    int *ptrb=&b;
    int product;
    int *ptr_product=&product;
    *ptr_product=(*ptra)*(*ptrb);
    cout<<*ptr_product;
    return 0;
}