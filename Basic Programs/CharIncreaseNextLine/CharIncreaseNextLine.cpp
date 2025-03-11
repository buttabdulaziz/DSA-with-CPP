#include <iostream>
using namespace std;

int main(){

    char ch='A';
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;   
        }
        ch=char(ch+1);
        cout<<endl;
    }
    
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    return 0;
}