#include<iostream>
using namespace std;

 int main(){
    string a="";
    string b="";
    string c="";

    cout<<"enter a string a";
    cin>>a;

    cout<<"enter a string b";
    cin>>b;

    for(int i=0;i<a.length();i++){
        bool found= false;
        for(int j=0;j<b.length();j++){
            if(a[i]==b[j]){
                found= true;
                break;
            }
        }
        
        if(!found){
            c+=a[i];
        }
    }

    cout<<c;
 }


 