// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             char ch='@'+i+j-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// pattern --
// ABCD
// BCDE
// CDEF
// DEFG

// -- simple and second approach to do that
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;


    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j=1;j<=n;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}