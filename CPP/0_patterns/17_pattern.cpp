/*
Pattern 17
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

Spaces + Alphabet + spaces
n-i-1  + 2*i+1    + n-i-1
*/


#include<bits/stdc++.h>
using namespace std;



void pattern17(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        char val = 'A';
        int brk = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << val << " ";
            if(j<=brk)
                val++;
            else
                val--;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: \t";
    cin>>n;
    pattern17(n);
}