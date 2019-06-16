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

bool test3() {
	double v = 1.23;
	basic_string<char> str = ToString<char>(v);
	return false;
}

bool test4() {
	int src = 0x12345678;
	basic_string<char> str = ToString<char>(src, 10);
	if (str == "305419896") return true;

	return false;

}

bool test5() {
	int src = 0x12345678;
	basic_string<char> str = ToString<char>(src, 16);
	if (str == "12345678") return true;

	return false;

}

bool test6() {
	int src = 0x12345678;
	basic_string<char> str = ToString<char>(src, 2);
	if (str == "00010010001101000101011001111000") return true;

	return false;

}

bool test7() {
	unsigned int src = 0xFFFFFFFF;
	basic_string<char> str = ToString<char>(src, 10);
	if (str == "4294967295") return true;

	return false;

}

bool test8() {
	int src = 0x12345678;
	basic_string<char8_t> str = ToString<char8_t>(src, 10);
	if (str == u8"305419896") return true;

	return false;

}

bool test9() {
	int src = 0x12345678;
	basic_string<char8_t> str = ToString<char8_t>(src, 16);
	if (str == u8"12345678") return true;

	return false;

}

bool test10() {
	int src = 0x12345678;
	basic_string<char8_t> str = ToString<char8_t>(src, 2);
	if (str == u8"00010010001101000101011001111000") return true;

	return false;

}

bool test11() {
	unsigned int src = 0xFFFFFFFF;
	basic_string<char8_t> str = ToString<char8_t>(src, 10);
	if (str == u8"4294967295") return true;

	return false;

}

int main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
	test11();
	return 0;
}