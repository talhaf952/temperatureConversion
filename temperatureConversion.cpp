#include<iostream>
using namespace std;
int main()
{
	float fahrenheit, celsius,Kelvin;
	cout<<"Enter Temperature in Celsius: ";
	cin>>celsius;
	fahrenheit = (celsius * 9.0) / 5.0 + 32;
	Kelvin= celsius + 273.15;
	cout<<"The Temperature in Celsius: "<<celsius<<endl;
	cout<<"The Temperature in Fahrenheit: "<<fahrenheit<<endl;
	cout<<"The Temperature in Kelvin: "<<Kelvin<<endl;
	return 0;
}
