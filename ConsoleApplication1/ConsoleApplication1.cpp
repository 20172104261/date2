// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class date
{
private:
	int years;
	int months;
	int days;
public:
	void yunsuan(int year, int month, int day);
	void display();
};

void date::yunsuan(int year, int month, int day)
{
	int a[13]= { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (year % 4 == 0 && year % 100 != 0 || years % 400 == 0)
	{
		a[2] = 29;
	}
	day += 1;
	if (day > a[month])
	{
		day -= a[month];
		month += 1;
		if (month > 12)
		{
			year += 1;
			month -= 12;
		}
	}
	years = year;
	months = month;
	days = day;
}

void date::display()
{
	cout << years << "年"<< months <<"月" << days << "日"<<endl;
}

int main()
{
	date o;
	int year, month, day;
	cout << "输入日期:" << endl;
	cin >> year >> month >> day;
	o.yunsuan(year, month, day);
	o.display();
    return 0;
}

