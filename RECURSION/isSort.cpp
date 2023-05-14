#include <iostream>
using namespace std;

bool isSorted (int *arr , int &n ,int i){
    if(i == n-1)
    return true;

    if(arr[i+1] < arr[i])
    return false;
    
    return isSorted(arr,n,i+1);
   
}


int main () {
    int arr[] = {3,5,6,7,89,94,7};
    int n = 7;
    int i = 0;

    bool ans = isSorted(arr,n,i);

    cout << "Answer -> " << ans << endl;
    return 0;

}