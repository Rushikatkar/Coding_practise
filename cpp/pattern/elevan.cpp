#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i+j-1;
        }
        cout<<endl;
    }
    return 0;
}

// pattern--
// 1234
// 2345
// 3456
// 4567