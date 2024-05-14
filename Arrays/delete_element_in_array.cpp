#include<iostream>
using namespace std;

int deletes(int* arr, int x, int n, int cap){
    if(n==0){
        cout<<"Empty array found"<<endl;
        return 0;
    }

    for(int i=0 ; i<n; i++){
        if(arr[i]==x){
            for(int j=i ;j<n-1; j++){
                arr[i]=arr[i+1];
            }
            n--;
        }
    }

    for(int i=0; i<n ; i++){
        cout<<arr[i];
    }
}

int main(){
    int n=4, x, cap=5; 
    int arr[n];
    cout<<"enter the array"<<endl;
    for(int i=0; i<n ;i++){
        int input;
        cin>>input;

        arr[i]=input;
    }
    cout<<"enter the element which you want to delete";
    cin>>x;

    deletes(arr, x, n, cap);
}