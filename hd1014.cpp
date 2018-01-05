#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
    int step, mod;
    while(cin >> step >> mod)
    {
        int cnt = 1;
        int seed_current = 0;

        seed_current = (seed_current + step) % mod;
        cnt++;

        while(seed_current != 0)
        {   
            seed_current = (seed_current+step) %mod;
            cnt++;
        }

        if(cnt == mod+1)
            cout <<setw(10) << step <<setw(10) << mod <<"    Good Choice"<< endl;
        else
            cout <<setw(10) << step <<setw(10) << mod << "    Bad Choice" << endl;
        cout << endl;
    }
    return 0;
}
