#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
        
    }
}
void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        } 
        //stars
        for(int j=1;j<=2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

    }
    cout<<endl;
}
}
void pattern8(int n){
    for(int i=0;i<=n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*n-(2*i-1);j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
    }
    cout<<endl;
}
}
void pattern9(int n) {
    // Top half
    for(int i = 0; i < n; i++) {
        // Spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Stars
        for(int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for(int i = n - 1; i >= 0; i--) {
        // Spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Stars
        for(int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern10(int n){
    for(int i=0;i<n;i++){
        int stars=i;
        for(int j=0;j<i;j++){
            if(stars<i){
                cout<<"*";
                stars++;}
            else{stars--;}
        cout<<endl;
    }
}
}
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        pattern10(n);
    }
    return 0;
}
