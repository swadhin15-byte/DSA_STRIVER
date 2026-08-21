#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price:"<<endl;
    cin>>cp;
    int sp;
    cout<<"Enter seling price:"<<endl;
    cin>>sp;
    if(cp>sp){
        cout<<"its a loss of:"<<cp-sp;
    }
    else if(sp>cp){
        cout<<"its a profit of:"<<sp-cp;

    }
    else{
        cout<<"no profit no loss.";
    }
}