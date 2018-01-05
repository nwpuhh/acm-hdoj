#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double result[20];

void get_reslt() 
{
    result[0] = 1;
    for(int i = 1; i < 20; i++)
        result[i] = result[i-1]/(i*1.0);
}

int main()
{
    get_reslt();
    cout << "n e" << endl
        << "- -----------" << endl;
    
    for(int i = 0; i <= 9; i++)
    {
        cout << i << " ";
        double sum = 0;
        for(int j = 0; j <= i; j++)
            sum += result[j];
        
        if(i < 3)
            cout << sum << endl;
        else
            cout <<setiosflags(ios::fixed)<<setprecision(9)<< sum << endl;
    }

    return 0;
}


