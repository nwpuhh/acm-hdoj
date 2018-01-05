#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int current_block = 1;
    while(current_block <= N)
    {
        if(current_block != 1)
            cout << endl;
        int case_c = 1;
        int n, m;
        while(cin >> n >> m)
        {
            int cnt = 0;
            if(n == 0 && m == 0)
                break;
            
            for(int a = 1; a < n; a++)
                for(int b = a+1; b < n; b++)
                    if(((a*a+ b*b + m) %(a*b)) == 0)
                        cnt++;
            cout << "Case " << case_c << ": " << cnt << endl;

            case_c++;
        }
        current_block++;
    }
    return 0;
}