#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number:";
    cin>>x;
    int sum = 0;
    while(x>0){
        int digit = x%10;
        if(digit%2==0){
            sum += digit;
            
        }
        x/=10;
    }
    cout<<"sum:"<<sum<<endl;
}