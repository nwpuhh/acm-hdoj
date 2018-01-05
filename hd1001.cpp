#include <iostream>
using namespace std;

long SUM(int n) 
{
    if(n == 0) 
        return 0;
    else
        return n + SUM(n-1);
}

int main() 
{
    int n;
    while(cin >> n) 
    {   
        cout << SUM(n) << endl;
        cout << endl;
    }
    return 0;
}