#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='@'+i+j-1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}

// pattern--

// A
// BC
// CDE
// DEFG
// EFGHI
