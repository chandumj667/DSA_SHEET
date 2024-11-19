/*
Pattern 4: 
1
2 2
3 3 3 
4 4 4 4
5 5 5 5 5
*/


#include<bits/stdc++.h>
using namespace std;


// function to print pattern 4
void pattern4(int n){
    for(int i=1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a number : \t";
    cin>>n;
    pattern4(n);
}