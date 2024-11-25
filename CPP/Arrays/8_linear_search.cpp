/*
Find the element in an unsorted array using linear search
*/

#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>&vec, int n, int ele){
    for (int i = 0; i < n; i++){
        if(vec[i] ==ele){
            return i;
        }
    }
    return -1;
}


int main(){
    int n;
    cout << "Enter the size of the array: \t";
    cin >> n;
    vector<int>vec(n);
    cout<<"Enter "<<(n)<<" elements in to the array:"<<endl;
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    int ele;
    cout << "Enter the element to find the index: \t";
    cin >> ele;
    int ind = solve(vec, n, ele);
    cout << ele << " is at Position : '" << ind+1 << "'";
}