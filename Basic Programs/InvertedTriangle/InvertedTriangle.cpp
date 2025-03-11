#include <iostream>
using namespace std;

int main(){

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=0;k<4-i;k++){
    //         cout<<(i+1);
    //     }
    //     cout<<endl;
    // }
    char ch='A';
    for(int i=0;i<4;i++){
        for(int j=0;j<i;j++){
                cout<<" ";
           }
           
        for(int j=0;j<4-i;j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;

    }
    return 0;
}