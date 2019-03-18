// rectangular.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Rect {

private:
	double l, w;

public:
	Rect(double a, double b) {				//定义构造函数，初始化类的成员，初始化后后面的函数可以直接用
		l = a;
		w = b;
	}

	void getArea();						//声明getArea,
	void getCircum();					//声明getCircum,
	int isSquare();						//声明isSquare,

};

void Rect::getArea(){						//定义getArea，计算面积

		cout << "area is " << l * w << endl;		//计算完的同时输出值

}

void Rect::getCircum() {					//定义getCircum，计算周长
	cout << "circum is " << (l + w) * 2 << endl;		//计算完的同时输出值
}

int Rect::isSquare() {						//定义isSquare，判断是否为正方形
	if (l == w)						//判断长宽是否相等，相等则为正方形，此时返回1
		return 1;					//要不是题目要求设返回值，可以直接判断是否是正方形然后直接输出结果
	
	else
		return 0;
	
}

int main()							//从这开始看
{
	cout << "please input length and wide";
	double length, wide;					//定义，长用length表示，宽用wide表示
	cin >> length >>wide;					
	Rect r(length, wide);					/*生成类Rect的一个对象r，并且用已经输入的具有具体数值length和wide初始化
								对象中的的l跟w（构造函数的作用），则class Rect中所有l跟w都可以直接用*/
	r.getArea();						//这个语句就可以使用函数getArea进行计算面积，
	r.getCircum();						//这个语句就可以使用函数getCircum进行计算周长，
	if (r.isSquare())					//r.isSquare可以调用函数isSquare，并根据返回1还是0下面其中一个语句
		cout << "it is square" << endl;
	else
		cout << "it is not square" << endl;

	system("pause");				 	//在vs2010或者2017中可以用这个暂停，可以不设置断点，两种防止一闪而过的方法
}


