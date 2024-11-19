/*
Pattern 9
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

the mix of spaces and stars
mix of pattern7 and pattern8

*/

#include <bits/stdc++.h>
using namespace std;

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "* ";
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
    cout << "Enter a number :\t";
    cin>>n;
    pattern7(n);
    pattern8(n);
}