//Q4 - Implement the swap function using pointers.
#include<iostream>
using namespace std;

void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
    return;
}

int main(){
    int a,b;
    cin>>a>>b;
    int *ptra=&a;
    int *ptrb=&b;
    swap(*ptra,*ptrb);
    return 0;
}