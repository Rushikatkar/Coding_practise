#include<iostream>
using namespace std;

int count(int digit){
    int counter=0;
        while(digit>0){
            digit=digit/10;
            counter++;
            }
            return counter;
    }
int main(){
    int digit;

    cout<<"Enter the digit";
    cin>>digit;
    
    int result= count(digit);
    cout<<result;
}