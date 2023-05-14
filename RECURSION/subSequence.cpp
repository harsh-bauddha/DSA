#include <iostream>
using namespace std;

void printSubSequences(string str, string ans, int i)
{
    // base case
    if (i >= str.length())
    {
        cout << ans << endl;
        return;
    }

    // exclude -> print as it is .
    printSubSequences(str, ans, i + 1);

    // include -> insert the char and then print .
    ans.push_back(str[i]);
    printSubSequences(str, ans, i + 1);
}

int main()
{

    string str = "abc";
    string ans = "";

    int i = 0;

    printSubSequences(str, ans, i);

    return 0;
}