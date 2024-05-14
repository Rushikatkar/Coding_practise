#include<iostream>
using namespace std;

int insert(int* arr, int n, int pos, int cap, int x){

    if(n==cap){
        return n;
    }

    int index= pos -1;

    for(int i=n-1 ; i>=index; i--){
        arr[i+1]= arr[i];
    }
    arr[index]= x;
    n++;

    for(int i=0 ;i<n ;i++){
        cout<<arr[i];
    }
}

int main(){
    int cap=5;
    int arr[cap];
    int pos, x,n=3;
    cout<<"Enter an element in array"<<endl;

    for(int i=0 ;i <n; i++){
        int c;
        cin>>c;
        arr[i]= c;
        
    }

    cout<<"please enter element and position of that element"<<endl;
    cin>>x>>pos;

    insert(arr , n , pos, cap , x);

    
}