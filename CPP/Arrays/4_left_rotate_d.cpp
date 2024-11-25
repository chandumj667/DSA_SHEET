/*
Left rotate array by D places
*/

#include<bits/stdc++.h>
using namespace std;


void print(vector<int>&vec, int d){
    cout << "After rotating " << d << " elements"<<endl;
    for(auto i:vec){
        cout << i << " ";
    }
}


void solve(vector<int>&vec, int n, int d){
    if(n==0 || d==0)
        return;
    d = d % n;

    reverse(vec.begin(), vec.begin() + d);
    reverse(vec.begin()+d, vec.end());
    reverse(vec.begin(), vec.end());
    print(vec, d);
}


int main(){
    int n;
    cout << "Enter the size of the array: \t";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int d;
    cout << "Enter d elements: \t";
    cin >> d;
    solve(vec, n, d);
}