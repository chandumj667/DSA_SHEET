/*
Find the element that presents one time in the array
the size of the array should be odd value as every number appears twice and only one number appears once


if the size of the array is even or odd the best approach is using unordered map or hashing
if it is only odd size then better is using XOR technique
*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&vec, int n){
    int ans = 0;
    for (auto i:vec){
        ans ^= i;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter a number: \t";
    cin>>n;
    vector<int>vec(n);
    cout << "Enter " << n << " Elements in to the array: " << endl;
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    int val = solve(vec, n);
    cout << "The number appears once is : " << val;
}