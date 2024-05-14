// #include<iostream>
// using namespace std;

// int lcm(int a, int b){
//     int c=max(a,b);

//     while(c>0){
//         if(c%a==0 && c%b==0){
//             return c;
//         }
//         c++;
//     }
// }

// int main(){
//     int a,b;
//     cout<<"Enter a and b ";
//     cin>>a>>b;

//     int result= lcm(a,b);
//     cout<<result;
// }

// better approach

#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }

    return gcd(b, a%b);
}

int main(){
    int a,b;
    cout<<"Enter a and b ";
    cin>>a>>b;

    int result= gcd(a,b);
    cout<<a*b/result;
}