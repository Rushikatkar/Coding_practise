#include<iostream>

using namespace std;
int main(){
    int n;

     cout<<"enter a n";
    cin>>n;

    int arr[n]; 
    int arr2[n];
    int arr_index=0;
    
   
    
    for(int i=0;i<n;i++){
        int temp=0;
        cin>>temp;
        arr[i]=temp;
    }

    for(int i=0;i<n;i++){
        if(arr[i]%10!=0){
            arr2[arr_index]=arr[i];
            arr_index++;
        }else{
            continue;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]%10==0){
            arr2[arr_index]=arr[i];
            arr_index++;
        }else{
            continue;
        }
    }

    for(int i=0 ;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}