#include<iostream>
#include<limits.h>
using namespace std;

int segements(int n, int x, int y, int z){
    // Base Condition
    if(n==0){
        return 0;
    }

    if(n<0){
        // Maximum segements of rod thats why us eint max
        return INT_MIN;
    }
    int ans1=segements(n-x, x, y, z) + 1;
    int ans2=segements(n-y, x, y, z) + 1;
    int ans3=segements(n-z, x, y, z) + 1;
    int maxi=max(ans1, max(ans2, ans3));
    return maxi;
}
int main(){
    int n=7;
    int x=5;
    int y=2;
    int z=2;
    int ans=segements(n, x, y, z);
    cout<<"Answer is: "<<ans<<endl;
return 0;
}