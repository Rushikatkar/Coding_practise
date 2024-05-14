#include<iostream>
using namespace std;
int main(){
    int i,n,j;
    cout<<"enter the n";
    cin>>n;

    for(i=1; i<=n;i++){
        for(j=1;j<=n;j++){
            // cout<<j;
            cout<<n-j+1;
        }
        cout<<endl;
    }
    return 0;
}

// pattern 

// 123
// 123
// 123

// 321
// 321
// 321