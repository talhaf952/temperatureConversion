#include<iostream>
using namespace std;
int main()
{
	float fahrenheit, celsius;
	cout<<"Enter Temperature in Celsius: ";
	cin>>celsius;
	fahrenheit = (celsius * 9.0) / 5.0 + 32;
	return 0;
}
