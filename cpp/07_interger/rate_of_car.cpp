#include<iostream>
using namespace std;
int main(){

    int r1, n, r2, x, hr, cost;
    cout<<"enter all info";
    cin>>r1>>n>>r2>>x;

    hr=(x+59)/60;

    while(hr>n){
        cost= r1*n + (hr-n) * r2;
    }else{
        cout<<r1*n;
    }

    cout<<"total cost is"<<cost;

}