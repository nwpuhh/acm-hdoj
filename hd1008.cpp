#include <iostream>
using namespace std;

int main()
{
    int N;
    while(cin >> N) 
    {
        if(N == 0)
            break;
        else
        {
            int floor_cnt = 0;
            int floor_in;
            int second_cnt = 0;
            while(N-- > 0) 
            {
                cin >> floor_in;
                if(floor_cnt < floor_in) 
                    second_cnt += (floor_in-floor_cnt)*6+5;
                else
                    second_cnt += (floor_cnt-floor_in)*4 + 5;
                floor_cnt = floor_in;
            }   
            cout << second_cnt << endl;
        }
    }
    return 0;
}