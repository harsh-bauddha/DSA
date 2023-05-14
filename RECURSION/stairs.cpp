#include <iostream>
using namespace std;

int climbingStair (int n ){
    if(n == 0||n==1)
    return 1;

    return climbingStair(n-1) + climbingStair(n-2);
}

int  main () {

int n ; 
cin >> n ;

int ans = climbingStair(n);

cout << "Answer -> " << ans << endl;

return 0;
}