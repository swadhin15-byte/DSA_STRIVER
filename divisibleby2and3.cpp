#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number:";
    cin>>x;
    if(x%5==0 && x%3==0){
        cout<<"number is divisible by both 5 & 3.";
    }
    else if(x%5==0){
        cout<<"divisible by 5 but not 3";

    }
    else if(x%3==0){
        cout<<"divisible  by 3 but not 5";

    }
    else{
        cout<<"not divisible by both 5 & 3";
    }
}