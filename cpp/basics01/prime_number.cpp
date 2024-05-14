#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number for check prime ";
    cin>>n;

    for(int i=2; i<n;i++){
        if(n%i!=0){
            cout<<"This is a prime number";
            break;
        }else if(n%i==0){
            cout<<"This is not a prime number";
            break;

        }
    }
}