// LearnCpp01.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>;//可以使用printf（）输出；
#include <cmath>;
using namespace std;
int main()
{
	cout << "Hello World,你好" << endl;
	/*cout << INT_MAX << endl;
	const int INT_I = 10;
	cout << INT_I << endl;*/
	//已知圆柱体的半径和高，求圆柱的体积
	const float PI = 3.14f;//定义了一个float类型的常量
	float radius = 4.5f;
	float height = 90.0f;
	double volume = PI * pow(radius,2)*height;
	cout << "体积是:" << volume << endl;
	cin.get();
	return 0;
}

