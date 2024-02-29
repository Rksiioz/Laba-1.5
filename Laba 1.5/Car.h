#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    void Init(string brand, int cylinders, int power);
    void Read();
    void Display() const;
    void changeBrand();
    void changePower();

private:
    string brand;
    int cylinders;
    int power;

public:
    const string &getBrand() const;
    void setBrand(const string &brand);
    int getCylinders() const;
    void setCylinders(int cylinders);
    int getPower() const;
    void setPower(int power);

};

