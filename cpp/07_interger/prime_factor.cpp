// #include<iostream>
// using namespace std;

// bool  prime(int n){
//     int i;
//     for( i=2; i<n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int prime_factor(int n){
//     int arr[100];
//     int counter=0;

//     int size = sizeof(arr) / sizeof(arr[0]);
//     for(int i=2; i<=n; i++){
//         // if(n%i==0){
//         //     int result=prime(i);
//         //     if(result== true){
//         //         cout<<i<<endl;
//         //         // arr[counter]= i;
//         //         // counter++;
//         //     }else{
//         //         continue;
//         //     }
            
//         // }
//         if(prime(i)==true){
//             int x=i;
//             while(n%x==0){
//                 cout<<i;
//                 x=x*i;
//             }
//         }
//     }

//     // for(int i=0 ; i<size;i++){
//     //     cout<<arr[i];
//     // }
// }

// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;

//     prime_factor(n);
// }


//efficient solution

// #include<iostream>
// using namespace std;

// int prime_factors(int n){

//     if(n<=1){
//         return 0;
//     }
//     for(int i=2; i*i<n; i++){
//         while(n%i==0){
//             cout<<i;
//             n=n/i;
//         }
//     }

//     if(n>1){
//         cout<<n;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number ";
//     cin>>n;

//     prime_factors(n);
// }


//much more efficient way

#include<iostream>
using namespace std;

int prime_factors(n){
    if(n<=1){
        return 0;
    }

    while(n%2==0){
        cout<<2;
        n=n/2;
    }

    while(n%3==0){
        cout<<3;
        n=n/3;
    }

    for(int i=5; i*i<=n; i=i+6){
        
    }
}
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;

    prime_factors(n);
}