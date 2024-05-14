#include<iostream>
using namespace std;

int factorial(int digit){
    int fact=1;

    for(int i=1; i<=digit;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int digit;
    cout<<"Enter a digit";
    cin>>digit;

    int result= factorial(digit);
    cout<<result;
}