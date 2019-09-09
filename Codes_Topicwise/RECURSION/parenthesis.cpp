#include <iostream>
#include <string>

using namespace std;

void paranthesis(int n, string out, int open, int close)
{
    if (close == n)
    {
        cout << out << endl;
        return;
    }
    if (open < n)
    {
        paranthesis(n, out + '(', open + 1, close);
    }
    if (close < open)
    {
        paranthesis(n, out + ')', open, close + 1);
    }
}

void printWellFormedParanthesis(int n)
{
    string output;
    int open = 0;
    int close = 0;
    paranthesis(n, output, open, close);
}
int main()
{
	printWellFormedParanthesis(5);
}