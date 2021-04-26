// houseboat.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;
#define pi 3.1415926

int main()
{
    int N;
    cin >> N;
    vector<pair<double, double>>items;
    vector<double> radius;
    vector<int>z;
    double x, y, sum, r;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        items.push_back(make_pair(x, y));
        sum = pow(x, 2) + pow(y, 2);
        r = sqrt(sum);
        radius.push_back(r);

    }
    double change = 0;
    double delta = 0;
    int flag=0;
    for (int j = 0; j < radius.size(); j++) {
        while (radius[j] > delta) {
            change += 100;
            delta = sqrt(change/pi);
            flag += 1;
        }
        z.push_back(flag);
        change = delta = 0;
        flag = 0;
        cout << "Property" << " " << j + 1 << ": This property will begin eroding in year " << z[j] <<"."<< endl;
    }
    
    cout << "END OF OUTPUT." << endl;



    return 0;
}