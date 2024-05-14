#include<iostream>
using namespace std;

bool prime(int num){
    for(int i=2;i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;

    cout<<"Enter a number ";
    cin>>num;

    int result= prime(num);
    if(result==true){
        cout<<"prime number";
    }else{
        cout<<"composite number";
    }
}