/*
pattern 2
*
* *
* * *
* * * *
* * * * *
*/
#include<bits/stdc++.h>
using namespace std;

// Function to print pattern 2
void pattern2(int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a number : \t";
    cin >> n;
    pattern2(n);
}