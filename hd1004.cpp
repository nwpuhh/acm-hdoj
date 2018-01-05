#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main()
{
    int num;
    string color;
    int cnt = 0;
    string color_great;
    map<string,int> map_num_color;
    map<string,int>::iterator iter;
    while(cin >> num)
    {   
        if(num == 0)
            break;
        cin >> color;
        map_num_color.insert(pair<string, int>(color,1));
        num--;
        while(num > 0) 
        {
            cin >> color;
            iter = map_num_color.find(color);
            if(iter != map_num_color.end())
                iter->second++;
            else
                map_num_color.insert(pair<string, int>(color,1));
            num--;
        }

        cnt = 0;
        color_great = "";
        for(iter = map_num_color.begin(); iter != map_num_color.end(); iter++)
        {
            if(cnt < iter->second)
            {
                color_great = iter->first;
                cnt = iter->second;
            }
        }

        cout << color_great << endl;
        map_num_color.clear();
    }
    return 0;
}