#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
     int count=0;

    //  while(fact>0){
    //     if(fact%10==0){
    //         count++;
    //     }
    //     fact=fact/10;
    //  }

    //  return count;
    for(int i=5; i<fact;i=i*5){
        count=count+fact/i;
        return count;
    }
}



int main(){
    int n;

    cout<<"Enter a number";
    cin>>n;

    int count=0;
    for(int i=5; i<n;i=i*5){
            count=count+n/i;
            
        }
    cout<<count;
    // int result = factorial(n);
    // cout<<result;
}