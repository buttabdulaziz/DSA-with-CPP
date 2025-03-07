#include <iostream>
using namespace std;

int main(){
    
    char ch ;
    cout<<"Enter any Character to check its case: ";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"Your entered charater is lowercase ";
    } else if(ch>=97 && ch<=122){
        cout<<"Your entered character is uppercase ";
    }
    else{
        cout<<"You entered wrong character";
    }

    (ch>=65 && ch<=90)?(cout<<"Uppercase"):(cout<<"Lowercase");
    
    return 0;


}
