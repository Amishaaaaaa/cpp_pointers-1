//Q5 - Write a function that returns the first character, last character and the number of
//occurrences of ‘t’ in a string input by user.
#include<iostream>
using namespace std;

void occur(wchar_t* word){
    int length=0,count=0;
    while(word[length]!=L'\0'){
        if(word[length]==L't'){
            count++;
        }
        length++;
        
    }
    wcout<<word[0]<<" "<<word[length-1]<<endl;
    cout<<count<<endl;
    return;
}

int main(){
    wchar_t word[100];
    wcin.getline(word,100);
    //wchar_t *ptr=&word;
    occur(word);
    //wcout<<word;
    return 0;
}