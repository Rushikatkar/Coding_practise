#include<iostream>
#include<vector>
using namespace std;

int check(int z){
    vector<int> v;

    while(z!=0){
        int b=z%10;
        bool found= false;
        for(int i=0 ;i<v.size(); i++){
            if(b==v[i]){
                found= true;
                break;
            }          
        }
            if(!found){
                    v.push_back(b);
            }else{
                return 0;
            }
        z=z/10;
        
    }
    return 1;
}


int main(){
    int n1, n2;

    cout<<"enter values of n1 and n2";
    cin>>n1>>n2;

    int count=0;
    for(int i=n1; i<=n2; i++){
        count+=check(i);
    }
    cout<<count;
}