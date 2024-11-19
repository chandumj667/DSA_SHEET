/*
Pattern 16
A
B B
C C C
D D D D
E E E E E

*/

#include<bits/stdc++.h>
using namespace std;


void pattern16(int n){
    
    char val = 'A';
    for(int i=1; i<=n; i++){
        for (int j = 1;j<=i; j++){
            cout<<val<<" ";
        }
        cout << endl;
        val += 1;
    }
}

int main(){
    int n;
    cout<<"Enter a number : \t";
    cin >> n;
    pattern16(n);
}