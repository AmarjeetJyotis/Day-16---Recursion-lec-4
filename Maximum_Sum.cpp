#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int solve (vector<int> &arr, int i, int &maxi, int sum){
    // base condition 
    if(i>=arr.size()){
        maxi=max(sum, maxi);
        return maxi;
    }

    // include
    solve(arr, i+2, maxi, sum+arr[i]);
    // exclude
    solve(arr, i+1, maxi, sum);
    return maxi;
}
int main(){
    vector<int> arr{1, 2, 3, 5, 4};
    int sum=0;
    int i=0;
    int maxi=INT_MIN;
    int ans = solve(arr, i, maxi, sum);
    cout<<"Answer is :"<<ans<<endl;
}