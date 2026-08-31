#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number:";
    cin>>x;
    bool flag = true;
    for(int i=2;i<x/2;i++){
        if(x%i==0){
            flag  = false;
            break;
        }
        
    }
    if(flag==false){
        cout<<"composite number.";

    }
    else{
        cout<<"prime number.";
    }
}