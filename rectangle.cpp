#include<iostream>
using namespace std;
int main(){
    int length,breadth,area,perimeter;
    cout<<"enter the length of the rectangle:"<<endl;
    cin>>length;
    cout<<"enter the breadth of the rectangle:"<<endl;
    cin>>breadth;
    area= length * breadth;
    perimeter = 2 *(length + breadth);
    cout<<"area is:"<<area<<endl;
    cout<<"perimeter is:"<<perimeter<<endl;
    if(area > perimeter){
        cout<<"area is greater than perimeter.";

    }
    else if(perimeter > area){
        cout<<"perimeter is greater than area.";
    }
    else{
        cout<<"both are equal.";
    }
}