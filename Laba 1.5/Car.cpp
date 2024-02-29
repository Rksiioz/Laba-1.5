#include "Car.h"


void Car::Init(string brand, int cylinders, int power) {
    setBrand(brand);
    setCylinders(cylinders);
    setPower(power);
}

void Car::Display() const {
    cout << "Brand: " << getBrand() << endl;
    cout << "Cylinders: " << getCylinders() << endl;
    cout << "Power: " << getPower() << endl;
}

void Car::Read() {
    string brand;
    int cylinders, power;

    cout << "      Enter:" << endl << endl;
    cout << "Brand: "; cin >> brand;
    cout << "Number of cylinders: "; cin >> cylinders;
    cout << "Power in horsepower: "; cin >> power;

    Init(brand, cylinders, power);
}

void Car::changeBrand() {
    string newBrand;
    cout << "Enter new brand: "; cin >> newBrand;
    setBrand(newBrand);
}

void Car::changePower() {
    int newPower;
    cout << "Enter a new power value: "; cin >> newPower;
    setPower(newPower);
}

const string &Car::getBrand() const {
    return brand;
}

void Car::setBrand(const string &brand) {
    Car::brand = brand;
}

int Car::getCylinders() const {
    return cylinders;
}

void Car::setCylinders(int cylinders) {
    Car::cylinders = cylinders;
}

int Car::getPower() const {
    return power;
}

void Car::setPower(int power) {
    Car::power = power;
}