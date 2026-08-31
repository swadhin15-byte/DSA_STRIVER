#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number:";
    cin>>x;
    int count=0;
    while(x>0){
        x/=10;
        count++;
        
    }
    cout<<"the number of digits:"<<count<<endl;
}