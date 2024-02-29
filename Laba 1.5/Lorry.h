#include "Car.h"

class Lorry {

private:
    Car car;
    int payloadCapacity;
public:
    const Car &getCar() const;
    void setCar(const Car &car);
    int getPayloadCapacity() const;
    void setPayloadCapacity(int payloadCapacity);
    void Init(int payloadCapacity, Car car);
    void Read();
    void Display() const;
    void changingValues();


};