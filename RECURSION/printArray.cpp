#include<iostream>
using namespace std;

void printArray(int *arr , int n ,int i ){
    if(i >= n)
        return ;

    
    cout << arr[i] << " ";
    printArray(arr,n,i+1);


    /* Reverse Print the Array
    printArray(arr,n,i+1);
    cout << arr[i] << " ";
    */      
    
}


int main(){

    int arr[] ={1,2,3,4,5,6};
    int n = 6;

    int i = 0 ;
    printArray(arr,n,i);
    return 0;
}
