#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter number 1:"<<endl;
    cin>>x;
    cout<<"enter number 2:"<<endl;
    cin>>y;
    cout<<"enter number 3:"<<endl;
    cin>>z;
    if(x>y && x>z){
        cout<<" number 1 is the largest.";

    }
    else if(y>x && y>z){
        cout<<"number 2  is the largest.";

    }
    else{
        cout<<"number 3 is the largest.";
    }

}