/*
Pattern 14
A
A B
A B C
A B C D
A B C D E
*/

#include<bits/stdc++.h>
using namespace std;


void pattern14(int n){
    for(int i=1; i<=n; i++){
        char val = 'A';
        for(int j=1; j<=i; j++){
            cout << val << " ";
            val += 1;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: \t";
    cin>>n;
    pattern14(n);
}