#include <iostream>
#include <string>

using namespace std;

int main()
{

	string Beverage[5] = {"Coke", "Zero Coke", "Water", "Pepsi", "Zero Pepsi"};
	int select = 0;

	cout << "Select your beverage (1~5): ";
	cin >> select;
	while (select < 1 || select > 5)
	{
		cout << "Error. choise was not valid, here is your money back" << endl;
		return 0;
	}
	cout << "You chose " << Beverage[select-1] << endl;


	return 0;
}
