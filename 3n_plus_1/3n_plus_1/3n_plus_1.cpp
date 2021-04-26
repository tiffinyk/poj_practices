// 3n_plus_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, int>>arr;
    vector<int> count;
    vector<int> max_cnt;
    int x, y;
    while(cin >> x >> y){
        arr.push_back(make_pair(x, y));
        for (int i = x; i <= y; i++) {
            int n = i;
            int print = 1;
            while (n != 1) {
                if (n % 2 == 1) {
                    n = 3 * n + 1;
                    print++;
                }
                else {
                    n /= 2;
                    print++;
                }
            }
        count.push_back(print);
        }
        int max = 0;
        for (int j = 0; j < count.size(); j++) {
            if (count[j] > max)
                max = count[j];
        }
        max_cnt.push_back(max);
        count.clear();
        //cin.ignore(1,'\n');
        cin.get();
        if (cin.get() == '\n')
            break;
    }
    
    for (int k=0;k<arr.size();k++){
        cout << arr[k].first << " " << arr[k].second<< " " << max_cnt[k] << endl;
    }
    return 0;
}
*/

//Memory Time
//256K   0MS  

#include<iostream>
using namespace std;

int CycleNum(int i)
{
    int count = 1;
    while (i != 1)
    {
        if (i % 2)
            i = 3 * i + 1;
        else
            i /= 2;
        count++;
    }
    return count;
}

int main(void)
{
    int a, b;
    while (cin >> a >> b)
    {
        int x = a < b ? a : b;
        int y = a > b ? a : b;
        int MaxCycle = 0;
        for (int i = x; i <= y; i++)
        {
            int temp = CycleNum(i);
            if (MaxCycle < temp)
                MaxCycle = temp;
        }
        cout << a << ' ' << b << ' ' << MaxCycle << endl;
    }
    return 0;
}