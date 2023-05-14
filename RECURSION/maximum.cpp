#include<iostream>
using namespace std;

void   maximumElement(int *arr , int n ,int i ,int &maxi){
    if(i >= n)
        return ;

    if(arr[i] > maxi)
     maxi = arr[i];
     maximumElement(arr,n,i+1,maxi);


  }  


int main(){

    int arr[] ={10,30,21,32,44,15,66,19};
    int n = 8;

    int maxi= INT_MIN ;
    int i = 0 ;

     maximumElement(arr,n,i,maxi);
     cout << "maximum element -> " << maxi << endl;
    return 0;
}
