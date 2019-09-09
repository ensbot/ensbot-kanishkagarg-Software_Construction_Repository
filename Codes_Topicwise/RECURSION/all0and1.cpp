#include <iostream>
#include <string>

using namespace std;

void paranthesis(int n, string out, int zero, int one)
{
    if ((zero+one) == 2*n)
    {
        cout << out << endl;
        return;
    }
    if (zero < n)
    {
        paranthesis(n, out + '0', zero + 1, one);
    }
    if (one < n)
    {
        paranthesis(n, out + '1', zero, one + 1);
    }
}

void printWellFormedParanthesis(int n)
{
    string output;
    int zero = 0;
    int one = 0;
    paranthesis(n, output, zero, one);
}
int main()
{
	printWellFormedParanthesis(2);
}