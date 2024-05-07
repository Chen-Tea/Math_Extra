#include "Math_Extra.h"

double MathExtra::factorial(int n) {
	if(n == 0)return 1;
	int sum = 1;
	return n == 1 ? sum = 1 : n * factorial(n - 1);
}

float MathExtra::q_sqrt(float number) {
	long i;
	float x2, y;
	const float threehalfs = 1.5F;
	x2 = number * 0.5F;
	y = number;
	i = *(long*)&y;
	i = 0x5f3759df - (i >> 1);
	y = *(float*)&i;
	y = y * (threehalfs - (x2 * y * y));
	y = y * (threehalfs - (x2 * y * y));     //12行中精度已经足够高 这行可以不加
	return (1 / y);
}

float MathExtra::q_rsqrt(float number) {
	long i;
	float x2, y;
	const float threehalfs = 1.5F;
	x2 = number * 0.5F;
	y = number;
	i = *(long*)&y;
	i = 0x5f3759df - (i >> 1);
	y = *(float*)&i;
	y = y * (threehalfs - (x2 * y * y));
	y = y * (threehalfs - (x2 * y * y));     //12行中精度已经足够高 这行可以不加
	return y;
}

int MathExtra::reverse(int number) {
	int rev = 0;
	while(number > 0) {
		rev = rev * 10 + number % 10;
		number /= 10;
	}
	return rev;
}

int MathExtra::fibonacci(int number) {
	if(number == 0) return 0;
	if(number == 1) return 1;
	return fibonacci(number - 1) + fibonacci(number - 2);
}

int MathExtra::GCD(int num1, int num2) {
	if (num2 == 0) {
		return num1;
	}
	return GCD(num2, num1 % num2);
}

int MathExtra::LCM(int num1, int num2){
	return (num1 * num2) / GCD(num1, num2);
}
