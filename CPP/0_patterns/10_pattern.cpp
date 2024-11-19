/*
Pattern 10

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

outer loop run 0 to 2*n-1 times

*/

#include<bits/stdc++.h>
using namespace std;

// function to print pattern 10
void pattern10(int n){
    for (int i = 1; i <= 2 * n - 1; i++){
        int star = i;
        if(i>n)
            star = 2 * n - i;
        for (int j = 1; j <=star; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a number: \t";
    cin >> n;
    pattern10(n);
}