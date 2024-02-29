#include "Lorry.h"


void Lorry::Init(int payloadCapacity, Car car) {
    setPayloadCapacity(payloadCapacity);
    setCar(car);
}

void Lorry::Read() {
    int payloadCapacity;
    Car car;
    car.Read();
    cout << "Payload capacity: "; cin >> payloadCapacity;
    cout << endl << endl;

    Init(payloadCapacity, car);

}

void Lorry::Display() const{
    car.Display();
    cout << "Payload capacity: " << getPayloadCapacity();
    cout << endl << endl;
}

void Lorry::changingValues() {
    int payloadCapacity;
    car.changeBrand();
    car.changePower();
    cout << "New payload capacity: "; cin >> payloadCapacity;
    cout << endl << endl;

    setPayloadCapacity(payloadCapacity);
}

const Car &Lorry::getCar() const {
    return car;
}

void Lorry::setCar(const Car &car) {
    Lorry::car = car;
}

int Lorry::getPayloadCapacity() const {
    return payloadCapacity;
}

void Lorry::setPayloadCapacity(int payloadCapacity) {
    Lorry::payloadCapacity = payloadCapacity;
}
