// main.cpp
// Reverse Numbers
// Created by ax on 9/28/16.
// Copyright © 2016 COMP130. All rights reserved.

#include<iostream>
#include<string>

using namespace std;

int check_sum(const string& str) {

	string working = str;
	int sum_total = 0;
	
	for (int i = 0; i < str.length(); i++)
	{
		cout << "cur character is " << str.at(i) << endl;

		int char_to_int = str.at(i) - 48;

		cout << "cur char to int is " << char_to_int << endl;

		if (char_to_int % 2 == 0)
		{
			sum_total += char_to_int * 2;
		} 
		else 
		{
			sum_total += char_to_int;
		}
	}

	return sum_total;

}

int main() {

	string s1 = " ";
	
	cout << "Enter a string of numbers: ";

	getline(cin, s1);

	cout << check_sum(s1);

	return 0;

}
