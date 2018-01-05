#include <iostream>
using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        int temp1 = 7;
        int temp2 = 11;

        temp1 %= 3;
        temp2 %= 3;

        if(num >= 2)
        {
            while(num-- >= 2)
            {
                int temp = temp1;
                temp1 = temp2;
                temp2 = (temp + temp1) % 3;
            }
            if(temp2 == 0)
                cout << "yes" << endl;
            else 
                cout << "no" << endl;
        }
        else 
            cout << "no" << endl;
    }
    return 0;
} 