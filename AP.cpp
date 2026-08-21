#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    for(int i=1;i<2*n-1;i++) // a nth = a+(n-1)common difference
    {
        cout<<i<<" ";
    }
}