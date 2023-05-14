#include<iostream>
using namespace std;

void   minimumElement(int *arr , int n ,int i ,int &mini){
    if(i >= n)
        return ;

    if(arr[i] < mini)
     mini = arr[i];
     minimumElement(arr,n,i+1,mini);
  }  


int main(){

    int arr[] ={10,30,21,32,44,15,66,19};
    int n = 8;

    int mini= INT_MAX ;
    int i = 0 ;

     minimumElement(arr,n,i,mini);
     cout << "maximum element -> " << mini << endl;
    return 0;
}
