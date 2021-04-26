// financial_management.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double arr[12];
	for (int i = 0; i < 12; i++) {
		cin >> arr[i];
	}
	double sum = 0;
	for (int j = 0; j < 12; j++) {
		sum += arr[j];
	}
	double average;
	average = sum / 12;
	cout << setiosflags(ios_base::fixed);
	cout <<"$"<< setprecision(2) << average << endl;

	return 0;
}