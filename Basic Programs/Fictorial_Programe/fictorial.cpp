#include <iostream>
using namespace std;

int main()
{
    int num;
    int res = 1;
    cout<<"Enter Number: ";
    cin>>num;
    if(num>0){
        for(int i=1;i<=num;i++){
            res = res*i;
        }
        cout<<res;    
    }
    else{
        cout<<"Enter Positive Number";
        }
    return 0;
}