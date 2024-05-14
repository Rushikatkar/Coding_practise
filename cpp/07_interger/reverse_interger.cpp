#include<iostream>
#include<climits>
using namespace std;
int main(){
    int digit, number, ans;
    cout<<"Enter a Number";
    cin>>number;

    while(number!=0){
        digit=number%10;
        // if( (ans>INT_MAX/10) || (ans< INT_MIN/10) ){
        //     cout<<"overflow occured!!";
        //     return 0;
        // }
        ans=(ans*10)+digit;
        number=number/10;
    }

    cout<<ans;
}