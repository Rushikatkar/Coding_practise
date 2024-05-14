#include<iostream>
using namespace std;

int main(){
    int interior_count, exterior_count;
    cout<<"enter the total interior walls";
    cin>>interior_count;
    cout<<"enter the total exterior walls";
    cin>>exterior_count;

    float interior, exterior;
    cout<<"enter a walls area in square feet for interior";
    float int_count, ext_count;
    int int_rate=18, ext_rate=12;
    for(int i=0; i<interior_count; i++){
        cin>>interior;
        int_count += int_rate* interior;  
    }

    cout<<"enter a walls area in square feet for exterior";

    for(int i=0; i<exterior_count; i++){
        cin>>exterior;
        ext_count += ext_rate* exterior;  
    }

    cout<<"total rate is :"<<int_count+ext_count;
}