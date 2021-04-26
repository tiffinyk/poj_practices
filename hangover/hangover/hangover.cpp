// hangover.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> a;
    double temp;
    while (cin >> temp) {
        if (temp != 0.00) {
            a.push_back(temp);
        }
        else
            break;
    }
    int N = a.size();
    vector<int> b;
    int n = 2;
    double sum = 0;
    
    for (int i = 0; i < N; i++) {
        while (a[i] > sum) {
            sum = sum + 1/double(n);
                n++;               
        }
        b.push_back(n-2);
        cout << b[i] << " " << "card(s)" << endl;
        n = 2;
        sum = 0;
    }   
return 0;
}