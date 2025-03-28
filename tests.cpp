#include "tests.h"
void print(int number, int multiplier, bool result) {
	cout << "Number = " << number
		<< ", Multiplier = " << multiplier
		<<"\t--> " << (result ? "Pass" : "Fail")
		<< endl;
}

void test01() {
	int number = 5;
	int multiplier = 2;

	int expected = 10;
	int actual = multiply(number, multiplier);
}

void test02() {
	int number = -5;
	int multiplier = 2;

	int expected = -10;
	int actual = multiply(number, multiplier);
}

void test03() {
	int number = 5;
	int multiplier = -2;

	int expected = -10;
	int actual = multiply(number, multiplier);
}

void test04() {
	int number = -5;
	int multiplier = -2;

	int expected = 10;
	int actual = multiply(number, multiplier);
}