#pragma once

struct Car;

void SetCar(Car* cars, const int size);
int FindModelCar(Car* cars, const int size, char ModelCar[]);
void PrintCar(Car* cars, const int index);
void SearchCar(Car* cars, const int size, char UserColor[], unsigned int UserPowerEngine, char UserTransmission[]);