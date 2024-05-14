#include<iostream>
using namespace std;

int main(){

    string input="";
    string output="";

    cout<<"Enter a string for reverse";
    cin>>input;

    for(int i=input.length(); i>=0 ; i--){
        output= output+ input[i];
    }

    cout<<output;
}