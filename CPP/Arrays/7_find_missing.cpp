/*
Find the missing element in an array :
as array contains 1 to n elements
size of array is n-1
*/


#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>&vec, int n){
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        xor1 ^= i + 1;
        xor2 ^=  vec[i];
    }
    xor1 ^= n;
    return (xor1 ^ xor2);
}


int main(){
    int n;
    cout << "Enter the size of the array: \t ";
    cin>>n;
    vector<int>vec(n-1);
    cout <<"Enter "<<(n-1)<<" Elements in to array from 1 to "<< (n)<<endl;
    for(int i=0; i<n-1; i++){
        cin >> vec[i];
    }
    int missing  = solve(vec, n);
    cout << "The missing element is " << missing;
}