#include <iostream>
using namespace std;

int main(){

    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=i;j<=3;j++){
            cout<<"  ";
        }
        for(int j=i;j<=3;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=4;i++){
        for(int j=i;j<=4;j++){
            cout<<"* ";
        }
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int j=i;j<=4;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}