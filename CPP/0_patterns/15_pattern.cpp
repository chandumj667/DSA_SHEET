/*
Pattern15
A B C D E
A B C D
A B C
A B
A

*/

#include<bits/stdc++.h>
using namespace std;

void pattern15(int n){
    for(int i=5; i>=0; i--){
        char val = 'A';
        for (int j = 1; j<=i; j++){
            cout << val << " ";
            val += 1;
        }
        cout << endl;
    }
}


int main(){
    int n;
    cout << "Enter a number: \t";
    cin >> n;
    pattern15(n);
}