#include <iostream> 
#include<vector>
#include <algorithm>
using namespace std;

int binarySearch(int *arr,int s,int e,int key ){
    
    
    if(s>e)
    return -1;

    int mid = (s+e)/2;
    if(arr[mid] == key)
    return mid;

    if(arr[mid] <key)
    return binarySearch(arr,mid+1,e,key);

    if(arr[mid]>key)
    return binarySearch(arr,s,mid-1,key);
    
}

int main () {

    int  arr[]={3,5,8,10,14,18,19} ;

    int key = 1;
    
    int n = 7;
    int s = 0 ;
    int e = n-1;

   int ans = binarySearch(arr,s,e,key);

   cout << "ANSWER : " << ans << endl; 

}