#include <iostream>
#include <math.h>
#include <string.h>

#include "ComplexNum.h"
#include "StructCar.h"

#define TEXTSIZE 50

using namespace std;

struct ComplexNum {
	double re;
	double im;
};

struct Car {
	char model[TEXTSIZE];
	unsigned int lenght;
	unsigned int clearance;
	unsigned int EngineCapacity;
	unsigned int PowerEngine;
	unsigned int diameter;
	char color[TEXTSIZE];
	char transmission[TEXTSIZE];
};

int main() {
	/*cout << "Complex Num 1: " << endl;
	ComplexNum complexnum1;
	SetNums(complexnum1);
	
	cout << "Complex Num 2: " << endl;
	ComplexNum complexnum2;
	SetNums(complexnum2);

	ComplexNum ResultComplexNum;

	char MathOperator;
	bool ValidOperator = true;

	while (ValidOperator) {
		cout << "Enter math operator: ";
		cin >> MathOperator;

		switch (MathOperator) {
			case '+':
				ResultComplexNum = Sum(complexnum1, complexnum2);
				PrintComplexNum(ResultComplexNum);
				ValidOperator = false;
				break;
			case '-':
				ResultComplexNum = Subtraction(complexnum1, complexnum2);
				PrintComplexNum(ResultComplexNum);
				ValidOperator = false;
				break;
			case '*':
				ResultComplexNum = Multiply(complexnum1, complexnum2);
				PrintComplexNum(ResultComplexNum);
				ValidOperator = false;
				break;
			case '/':
				ResultComplexNum = Divid(complexnum1, complexnum2);
				PrintComplexNum(ResultComplexNum);
				ValidOperator = false;
				break;
			default:
				cout << "Invalid Operator!" << endl;
				break;
		}
	}*/

	int size = 1;
	Car * cars = new Car[size];
	char ModelCar[TEXTSIZE];

	unsigned int UserChoice = 1;

	cout << "0 - Exit;\n1 - Add Car;\n2 - Print Car;\n3 - Search Car;" << endl;

	while (UserChoice != 0) {
		cout << "Enter variant: ";
		cin >> UserChoice;

		switch (UserChoice) {
			case 0:
				cout << "Exit!" << endl;
				break;
			case 1:
				SetCar(cars, size);
				size++;
				break;
			case 2:
				cout << "Enter model to print car or write \'all\': ";
				cin.ignore();
				cin.getline(ModelCar, TEXTSIZE);

				if (strcmp(ModelCar, "all") == 0) {
					for (int i = 0; i < size - 1; i++)
						PrintCar(cars, i);
					cout << endl;
				}
				else {
					if (FindModelCar(cars, size, ModelCar) != -1)
						PrintCar(cars, FindModelCar(cars, size, ModelCar));
					else
						cout << "Car not Find!" << endl;
				}
				break;
			case 3:
				break;
			default:
				cout << "Invalid choice!" << endl;
				break;
		}
	}
	delete[] cars;
}



