/*
Find the second largest and second smallest elements in the array : 
*/


#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&vec){
    int small = INT_MAX;
    int sec_small = INT_MAX;
    int large = INT_MIN;
    int sec_large = INT_MIN;

    for (int i = 0; i < vec.size(); i++){
        small = min(small, vec[i]);
        large = max(large, vec[i]);
    }
    for(int i=0; i<vec.size(); i++){
        if(vec[i]<sec_small && vec[i]!=small){
            sec_small = vec[i];
        }
        if (vec[i] > sec_large && vec[i] != large)
        {
            sec_large = vec[i];
        }
    }
    cout << "Second smallest element is : " << sec_small << endl;

    cout << "Second largest element is  : " << sec_large;
}


int main(){
    int n;
    cout<<"Enter the size of the array: \t";
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    solve(vec);
}