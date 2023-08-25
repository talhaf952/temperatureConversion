#include<iostream>
using namespace std;
int main()
{
	float fahrenheit, celsius;
	cout<<"Enter Temperature in Celsius: ";
	cin>>celsius;
	fahrenheit = (celsius * 9.0) / 5.0 + 32;
	cout<<"The Temperature in Celsius: "<<celsius<<endl;
	cout<<"The Temperature in Fahrenheit: "<<fahrenheit<<endl;
	return 0;
}
