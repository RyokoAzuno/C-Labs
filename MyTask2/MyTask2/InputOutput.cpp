#include "pch.h"
#include "InputOutput.h"
#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include <iomanip>

void formatIO()
{
	char ch;
	int i;
	float f;
	unsigned int ui;
	bool b;
	int tmp;
	unsigned short int usi;
	long long ll;
	double d;
	long double ld;

	printf("---------FORMAT INPUT------------\n");
	printf("Enter char variable: ");
	scanf("%c", &ch);
	printf("Enter int variable: ");
	scanf("%i", &i);
	printf("Enter float variable: ");
	scanf("%f", &f);
	printf("Enter unsigned int variable: ");
	scanf("%u", &ui);
	printf("Enter bool variable: ");
	scanf("%i", &tmp);
	b = tmp; // for boolean type convertation
	printf("Enter unsigned short int variable: ");
	scanf("%hu", &usi);
	printf("Enter long long variable: ");
	scanf("%lld", &ll);
	printf("Enter double variable: ");
	scanf("%lf", &d);
	printf("Enter long double variable: ");
	scanf("%Lf", &ld);

	printf("---------FORMAT OUTPUT------------\n");
	printf("\tchar: %c\n", ch);
	printf("\tint: %i\n", i);
	printf("\tfloat: %.2f\n", f);
	printf("\tunsigned int: %u\n", ui);
	printf("\tbool: %s\n", b ? "true" : "false");
	printf("\tunsigned short int: %hu\n", usi);
	printf("\tlong long int: %lld\n", ll);
	printf("\tdouble: %.8lf\n", d);
	printf("\tlong double: %.10Lf\n", ld);
}

void streamIO()
{
	using std::cout;
	using std::cin;
	using std::endl;

	char ch;
	int i;
	float f;
	unsigned int ui;
	bool b;
	unsigned short int usi;
	long long ll;
	double d;
	long double ld;

	cout << "---------STREAM INPUT------------" << endl;
	cout << "Enter char variable: ";
	cin >> ch;
	cout << "Enter int variable: ";
	cin >> i;
	cout << "Enter float variable: ";
	cin >> f;
	cout << "Enter unsigned int variable: ";
	cin >> ui;
	cout << "Enter bool variable: ";
	cin >> b;
	cout << "Enter unsigned short int variable: ";
	cin >> usi;
	cout << "Enter long long variable: ";
	cin >> ll;
	cout << "Enter double variable: ";
	cin >> d;
	cout << "Enter long double variable: ";
	cin >> ld;

	cout << "---------STREAM OUTPUT------------" << endl;
	cout << "char: " << ch << endl;
	cout << "int: " << i << endl;
	cout << "float: " << std::setprecision(5) << f << endl;
	cout << "unsigned int: " << ui << endl;
	cout << "bool: " << std::boolalpha << b << endl;
	cout << "unsigned short int: " << usi << endl;
	cout << "long long int: " << ll << endl;
	cout << "double " << std::setprecision(8) << d << endl;
	cout << "long double: " << std::setprecision(3) << ld << endl;
}