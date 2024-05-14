#include<iostream>
using namespace std;

int search(int* arr, int x, int n){
    for(int i=0 ;i<n ; i++){
        if(arr[i]==x){
            cout<<"index is "<<i<<endl;
           return;
        }
    }
    cout<<"Element not found"<<endl;
}

int main(){
    cout<<"enter size of array"<<endl;
    int n;
    cin>>n;

    cout<<"enter a array"<<endl;
    int arr[n];
    for(int i =0; i<n ;i++){
        int input;
        cin>>input;

        arr[i]=input;
    }

    cout<<"Enter a element that want to search"<<endl;
int x;
cin>>x;
    search(arr, x,n);
    
}