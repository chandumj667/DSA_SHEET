/*
Pattern 5
* * * * *
* * * *
* * *
* * 
*
*/

#include<bits/stdc++.h>
using namespace std;


// function to print pattern5

void pattern5(int n){
    for (int i = 5; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << "* ";

        }
        cout << endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number : \t";
    cin >> n;
    pattern5(n);
}