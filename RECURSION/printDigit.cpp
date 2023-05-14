#include<iostream>
using namespace std;

void printDigit(int n ){
    if(n == 0)
    return ;

    int rem = n %10;
    printDigit(n/10);
    cout << rem << " ";
    
    
}

int main () {

int n ;
cin >> n ; 

printDigit(n);

}