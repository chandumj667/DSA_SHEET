/*
Find the largest element in the array : 
*/

#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>&vec){
    int maxi = INT_MIN;
    for(auto i:vec){
        if(i>maxi){
            maxi = i;
        }

    }
    return maxi;
}

int main(){
    int n;
    cout << "Enter the size: \t";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter "<<n<<" elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int largest = solve(vec);
    cout << "The largest element in the array is : " << largest;
}