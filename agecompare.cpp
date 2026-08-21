#include<iostream>
using namespace std;
int main(){
    int x ;
    int y;
    int z;
    cout<<"enter the age of RAM:";
    cin>>x;
    cout<<"enter the age of SHYAM:";
    cin>>y;
    cout<<"enter the age of AJAY:";
    cin>>z;
    if(x<y){
        if(x<z){
            cout<<"RAM is the youngest one.";

        }
        else{
            cout<<"AJAY is the youngest one.";
        }
    }
    else{
        if(y<z){
            cout<<"SHYAM is the youngest one.";
        }
        else{
            cout<<"AJAY is the youngest one.";
        }
    }
}