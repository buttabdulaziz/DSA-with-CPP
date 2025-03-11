#include <iostream>
using namespace std;

int main(){

    int row;
    int col;
    for(int row=1;row<=8;row++){
        for(int col=1;col<=8;col++){
            if(row+col==5){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}