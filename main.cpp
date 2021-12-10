#include "polinom.h"
#include <iostream>
#include <gtest/gtest.h>

//1237

using namespace std;
int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

	/*bool end_work = false;
	int answer;
	char answer_c;
	int size_polinom;
	while (end_work == false) 
	{
		polinom polinom_1, polinom_2;
		polinom polinom_res;
		monom input_monom;
		double input;
		cout << "enter size of the first polinom: ";
		cin >> size_polinom;
		for (int i = 0; i < size_polinom; i++) 
		{
			cout << "element " << i << ":  " << endl;
			cout << "	 coefficient = ";
			cin >> input;
			input_monom.setcoefficient(input);
			cout << "	 degree = ";
			cin >> input;
			input_monom.setdegree(input);
			polinom_1.addelement(input_monom);
		}
		cout << endl;
		cout << "enter size of the second polinom: ";
		cin >> size_polinom;
		for (int i = 0; i < size_polinom; i++) 
		{
			cout << "element " << i << ":  " << endl;
			cout << "	coefficient = ";
			cin >> input;
			input_monom.setcoefficient(input);
			cout << "	degree = ";
			cin >> input;
			input_monom.setdegree(input);
			polinom_2.addelement(input_monom);
		}

		bool correct_input = false;
		bool select_operation = false;
		bool correct_select_polinom = false;
		monom constanta_monom;
		while (select_operation == false) {
			correct_input = false;
			while (correct_input != true) {
				cout << endl;
				cout << "select operation (+,-,*): ";
				cin >> answer_c;
				cout << endl;
				switch (answer_c) {
				case '+':
					polinom_res = polinom_1 + polinom_2;
					cout << "the sum: " << endl;
					for (int i = 0; i < polinom_res.getlength(); i++) {
						cout << "element " << i << " = " << polinom_res[i].getcoefficient() << "|" << polinom_res[i].getdegree() << endl;
					}
					correct_input = true;
					break;
				case '-':
					polinom_res = polinom_1 - polinom_2;
					cout << "the difference: " << endl;
					for (int i = 0; i < polinom_res.getlength(); i++) 
					{
						cout << "element " << i << " = " << polinom_res[i].getcoefficient() << "|" << polinom_res[i].getdegree() << endl;
					}
					correct_input = true;
					break;
				case '*':
					while (correct_input != true) {
						cout << "select type of multiply (0-polinom|1-const): ";
						cin >> answer;
						switch (answer) {
						case 0:
							correct_input = true;
							polinom_res = polinom_1 * polinom_2;
							cout << "the multiply: " << endl;
							for (int i = 0; i < polinom_res.getlength(); i++) 
							{
								cout << "element " << i << " = " << polinom_res[i].getcoefficient() << "|" << polinom_res[i].getdegree() << endl;
							}
							break;
						case 1:
							correct_input = true;
							double constanta;
							cout << "enter constant for multiply: ";
							cin >> constanta;
							constanta_monom = monom(constanta, 000);
							while (correct_select_polinom != true) 
							{
								cout << "select polinom (1|2): ";
								cin >> answer;
								switch (answer)
							  {
								case 1:
									correct_select_polinom = true;
									polinom_res = polinom_1 * constanta_monom;
									break;
								case 2:
									correct_select_polinom = true;
									polinom_res = polinom_2 * constanta_monom;
									break;
								default:
									correct_select_polinom = false;
									cout << "input error!" << endl;
								}
							}
							cout << "the multiply(const): " << endl;
							for (int i = 0; i < polinom_res.getlength(); i++) 
							{
								cout << "element " << i << " = " << polinom_res[i].getcoefficient() << "|" << polinom_res[i].getdegree() << endl;
							}
							break;

						default:
							correct_input = false;
							cout << "input error!" << endl;
						}
						correct_input = true;
						break;
				default:
					cout << "input error!" << endl;
					}
				}
				cout << "continue selecting operation? (1-yes|0-no): ";
				cin >> answer;
				if (answer == 1) 
				{
					select_operation = false;
				}
				else 
				{
					select_operation = true;
				}
			}
		}
		cout << endl;
		cout << "continue work? (1-yes|0-no): ";
		cin >> answer;
		if (answer == 0) 
		{
			end_work = true;
		}
		else 
		{
			end_work = false;
		}
	}*/
}