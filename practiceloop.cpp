#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"x:";
    cin>>i;
    for(i=1;i<=100;i++){
        if(i%2!=0) cout<<i<<endl;
    }
}