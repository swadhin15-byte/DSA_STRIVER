#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3;
    cout<<"enter the angle 1 of triangle:";
    cin>>a1;
    cout<<"enter the angle 2 of triangle:";
    cin>>a2;
    cout<<"enter the angle 3 of triangle:";
    cin>>a3;
    if(a1+a2+a3==180){
        cout<<"it is triangle.";

    }
    else{
        cout<<"it is not a triangle.";
    }
}