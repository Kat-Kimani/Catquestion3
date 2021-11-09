//tax app
#include<iostream>
using namespace std;

int main() {
	int salary = 10000;
	float tax = 0.25;
	float netsal = 0.75;

	cout<< "Show net Salary \n";
	cout << " Show Tax Amount Payable to Govt \n\n";
	cout << "Net Salary = " << salary * netsal << " \n";
	cout << "Tax payable to govt" << salary * tax << "\n";



	return 0;
}