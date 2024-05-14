// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter a and b";
//     cin>>a>>b;

//    int minnum= min(a,b);
//    while(minnum>0){
//     if(a%minnum==0 && b%minnum==0){
//         break;
//     }
//         minnum--;
//    }
//     cout<<minnum;

// }

//better approach
#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }else{
      return  gcd(b,a%b);
    }
}

int main(){
    int a,b;
    cin>>a>>b;

    int result = gcd(a,b);
    cout<<result;
}

