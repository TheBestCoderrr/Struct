#include <iostream>
#include <string.h>

#define TEXTSIZE 50

using namespace std;

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

void SetCar(Car* cars, const int size) {
	cout << "Enter model car:";
	cin.ignore();
	cin.getline(cars[size - 1].model, TEXTSIZE);

	cout << "Enter lenght:";
	cin >> cars[size - 1].lenght;

	cout << "Enter clearance:";
	cin >> cars[size - 1].clearance;

	cout << "Enter engine capacity:";
	cin >> cars[size - 1].EngineCapacity;

	cout << "Enter power engine:";
	cin >> cars[size - 1].PowerEngine;

	cout << "Enter diameter wheels:";
	cin >> cars[size - 1].diameter;

	cout << "Enter color car:";
	cin.ignore();
	cin.getline(cars[size - 1].color, TEXTSIZE);

	cout << "Enter transmission car:";
	cin.getline(cars[size - 1].transmission, TEXTSIZE);
}

int FindModelCar(Car* cars, const int size, char ModelCar[]) {
	for (int i = 0; i < size; i++) {
		if (strcmp(cars[i].model, ModelCar) == 0)
			return i;
	}
	return -1;
}

void PrintCar(Car* cars, const int index) {
	cout << "Model car: ";
	for (int i = 0; i < strlen(cars[index].model); i++)
		cout << cars[index].model[i];
	cout << endl;
	cout << "Lenght: " << cars[index].lenght << " m" << endl;
	cout << "Clearance: " << cars[index].clearance << " cm" << endl;
	cout << "Engine capacity: " << cars[index].EngineCapacity << " l" << endl;
	cout << "Power engine: " << cars[index].PowerEngine << " " << endl;
	cout << "Diameter wheels: " << cars[index].diameter << " cm" << endl;
	cout << "Color car: ";
	for (int i = 0; i < strlen(cars[index].color); i++)
		cout << cars[index].color[i];
	cout << endl;
	cout << "Transmission car:";
	for (int i = 0; i < strlen(cars[index].transmission); i++)
		cout << cars[index].transmission[i];
	cout << endl;
}

void SearchCar(Car* cars, const int size, char UserColor[], unsigned int UserPowerEngine, char UserTransmission[]) {
	bool NoneCar = true;
	cout << "Cars: ";
	for (int i = 0; i < size - 1; i++) {
		if (strcmp(UserColor, cars[i].color) == 0 && UserPowerEngine < cars[i].PowerEngine &&
			strcmp(UserTransmission, cars[i].transmission) == 0) {
			for (int j = 0; j < strlen(cars[i].model); j++)
				cout << cars[i].model[j];
			cout << "; ";
			NoneCar = false;
		}
	}
	if (NoneCar)
		cout << "None";
	cout << endl;
}