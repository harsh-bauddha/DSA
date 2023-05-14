#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void solve(int *arr,int size,int i,int sum,int &maxi){

    if(i>=size){
    maxi = max(sum ,maxi);
    return ;
    }

    //include
    solve(arr,size,i+2,sum+arr[i],maxi);

    //exclude
    solve(arr,size,i+1,sum,maxi);
}

int main (){

    int arr[] = {1,2,4};
    int size = 3;
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;

    solve(arr,size ,i ,sum,maxi );
    cout << maxi << endl;

    return 0 ;
}