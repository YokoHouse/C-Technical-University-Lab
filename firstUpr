#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	Car(string make, string model, string color,
		int year = 2024, bool isWorking = false, float price = 0.0f) :
		make(make), model(model), color(color),
		year(year), isWorking(isWorking), price(price) {

		cout << "New Car:" << this->make << "" << this->model << endl;
	}

	~Car() {
		cout << "Delete Car :" << this->make << "" << this->model << endl;
	}

	void PrintCarSpec() {
		cout << "Make : " << this->make << endl;
		cout << "Model : " << this->model << endl;
		cout << "Color : " << this->color << endl;
		cout << "Year : " << this->year << endl;
		cout << "isWorking : " << this->isWorking << endl;
		cout << "Price : " << this->price << endl;
	}
private:
	string make;
	string model;
	string color;
	int year;
	bool isWorking;
	float price;

protected:
};

int main() {
	Car car1("VW", "Golf", "black", 1987, false, 500);
	Car car2("Ford", "Model T", "black", 1932, true, 300000);
	Car* car3= new Car("Tesla", "3", "white");

	car1.PrintCarSpec();
	car2.PrintCarSpec();
	car3->PrintCarSpec();

	delete car3;

	cout << "Hello World!" << endl;
	return 0;
}
