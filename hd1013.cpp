#include <iostream>
#include <string.h>
using namespace std;

int get_result(int num) 
{
    int cnt = 0;
    while(num > 0)
    {
        cnt += num %10;
        num /= 10;
    }
    if(cnt < 10)
        return cnt;
    else
        return get_result(cnt);
}

int main()
{
    char str[1000];
    int sum = 0;
    while(cin >> str)
    {
        sum = 0;
        if(str[0] == '0')
            break;
        
        for(int i = 0; i < strlen(str); i++)
            sum += str[i] - '0';
        
        cout << get_result(sum) << endl;
    }
    return 0;
}