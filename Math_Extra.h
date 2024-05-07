#pragma once
#include<cmath>


class MathExtra
{
public:
	static double factorial(int n);//求阶乘
	static float q_sqrt(float number);//求平方根
	static float q_rsqrt(float number);//求平方根倒数
	static int reverse(int number);//实现整数的反转
	static int fibonacci(int number);//求斐波那契数列第n项
	static int GCD(int num1, int num2);//求最大公约数
	static int LCM(int num1, int num2);//求最小公倍数
};