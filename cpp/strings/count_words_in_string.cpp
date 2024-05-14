#include<iostream>
using namespace std;
int main(){
    string sentence="";

    cout<<"Enter a sentence ";
    getline(cin, sentence);
    int count=0;

    for(int i=0; i<=sentence.length(); i++){
        if(sentence[i]==' '){
            count++;
        }
    }

    cout<<count;
}