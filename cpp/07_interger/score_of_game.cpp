#include<iostream>
using namespace std;

int main(){
    int level, n[10], score=0;
    cout<<"enter a total level of game";
    cin>>level;

    cout<<"enter the levels";
    for(int i=0;i<level;i++){
        int temp;
        cin>>temp;

        n[i]= temp;
    }

    for(int i=0;i<level;i++){
    if(n[i]>n[i-1]){
        score+=1;
    }else{
        continue;
    }
 }
 cout<<score;
}


