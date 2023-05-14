#include<iostream>
using namespace std;


int  checkKey(string &str ,int i,int& n,char &key){
    if(i>= n)
    return -1;

    if(str[i] == key)
    return i;

    return checkKey(str,i+1,n,key);
    
    
}
int main () {
    string str = "lovebabbar";
    int n = str.length();

    char key = 'h';
    int i = 0;
    int ans = checkKey(str,i,n,key);

    cout << ans << endl;

    return 0;
}