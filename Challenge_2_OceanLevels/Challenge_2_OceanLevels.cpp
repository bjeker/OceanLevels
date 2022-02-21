// Ryan Bieker, CS 3060 001, Chapter 2 Programming Challenges, due 2/1/2022, calculates value of oceal levels risen over years

#include <iostream>

using namespace std;

int main()
{
	//ocean rise rate
	double oceanRise = 1.5;

	//years
	int oceanFive = 5;
	int oceanSeven = 7;
	int oceanTen = 10;
	
	//ocean levels risen over years
	cout << "In 5 years the ocean's level will be higher by " << oceanRise * oceanFive << " millimeters." << endl;
	cout << "In 7 years the ocean's level will be higher by " << oceanRise * oceanSeven << " millimeters." << endl;
	cout << "In 10 years the ocean's level will be higher by " << oceanRise * oceanTen << " millimeters." << endl;
}
