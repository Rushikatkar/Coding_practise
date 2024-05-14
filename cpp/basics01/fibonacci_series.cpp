#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,n;

    cout<<"enter the range";
    cin>>n;
        cout<<a;
        cout<<b;
    for(int i=0;i<n;i++){
        int nextNum=a+b;
        
        cout<<nextNum;
        
        a=b;
        b=nextNum;
    }
    return 0;
}