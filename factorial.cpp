#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number:";
    cin>>x;
    int factorial = 1;
    for(int i=x;i>=1;i--){
        factorial*=i;
        cout<<i<<endl;
    }
    
}