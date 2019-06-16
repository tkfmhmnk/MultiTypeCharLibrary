#include<iostream>
#include<string>

#include"mtcNumericConv.h"

using namespace std;
using namespace mtc::NumericConv;

bool test1() {
	basic_string<char> str = "123";
	int ans;

	ans = ToNumeric<short>(str);

	if (ans == 123) return true;

	return false;
}

bool test2() {
	basic_string<char> str = "123";
	int ans;

	ans = ToNumeric<int>(str);

	if (ans == 123) return true;

	return false;
}

int main() {
	test1();
	test2();
	return 0;
}