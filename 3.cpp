
/*Q3 - Write a function that returns the largest and the smallest number out of 3 given numbers.
The main function should call this function to get the largest and smallest number and print
the output.
*/
#include<iostream>
using namespace std;

void max_min(int a,int b,int c){
    if(a>b && a>c){
        cout<<"max: "<<a;
    }
    else if(b>a && b>c){
        cout<<"max: "<<b;
    }
    else{
        cout<<"max: "<<c;
    }

    if(a<b && a<c){
        cout<<"min: "<<a;
    }
    else if(b<c && b<a){
        cout<<"min: "<<b;
    }
    else{
        cout<<"min: "<<c;
    }
    return;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int *ptra=&a;
    int *ptrb=&b;
    int *ptrc=&c;

    max_min(*ptra,*ptrb,*ptrc);
    return 0;
}

