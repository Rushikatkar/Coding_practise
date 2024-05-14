#include<iostream>
using namespace std;

int strong(int n){
    
    int result=0;
    while(n>0){
        int digit=n%10;
        int fact=1;
        for(int i=1; i<=digit; i++){
            fact=fact*i;
        }
        // cout<<fact;
        result=result+fact;

        n=n/10;
    }

    return result;
}

int main(){
int n;
    cout<<"Enter a number for check strong";
    cin>>n;

    int c= strong(n);
    cout<<c;
    if(n==c){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}