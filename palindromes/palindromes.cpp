// palindromes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int reverseNumber(int n)
{
	int reversedNumber = 0, remainder;

	while (n != 0)
	{
		remainder = n % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		n /= 10;
	}

	return reversedNumber;
}

int main() {
	int max = 1000000, reverse;

	cout << "The Palindromes in 2 and 10 number of systems up to 1,000,000" << endl;

	for (int i = 1; i <= max; i++) {
		reverse = reverseNumber(i);
		if (reverse == i) {
			int k = i;
			std::string doubleI = "1";
			std::string doubleIreverse = "";
			while (k > 1) {
				int j = k % 2;
				std::string tempString = std::to_string(j);
				doubleI.insert(1, tempString);
				doubleIreverse = doubleIreverse + tempString;
				k = k / 2;
			}
			doubleIreverse = doubleIreverse + "1";

			if (doubleIreverse == doubleI) {
				cout << doubleI << " : " << i << endl;
			}
		}
	}
	system("pause");
	return 0;
}