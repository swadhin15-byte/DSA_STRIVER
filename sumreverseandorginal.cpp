#include<iostream>
using namespace std;
int main(){
    int x, original,rev=0;
    cout<<"enter the  number:";
    cin>>x;
    original = x;
    while(x!=0){
        int ld = x%10;
        rev = rev*10;
        rev = rev+ld;
        x/=10;

    }
    cout<<"reverse number is :"<<rev<<endl;
    cout<<"sum of reverse and original:"<<original + rev<<endl;
}