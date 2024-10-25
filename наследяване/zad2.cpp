#include <iostream>
#include <string>
using namespace std;

class MovingObject {
protected:
    int max_speed;
public:
    MovingObject(int m) : max_speed(m) {}
    virtual void printData() {}
};

class Plane : virtual public MovingObject {
protected:
    int wingspan;
public:
    Plane(int w, int maxspeed) :MovingObject(maxspeed), wingspan(w) {}
    virtual void flyTo(string destination) {
        cout << "Fly to" << destination << endl;
    }
};

class Car : virtual public MovingObject {
protected:
    int max_passangers;

public:
    Car(int ms, int mp) :MovingObject(ms), max_passangers(mp) {
        
    }

    virtual void driveTo(string destination) {
        std::cout << "Driving to" << destination << endl;
    }
};

class FutureCar : public Plane, public Car {
public:
    FutureCar(int mp, int wings, int ms) :
        MovingObject(ms + 1000), Plane(wings, ms + 2000), Car(ms + 3000, mp) {}
    void printData() {
        std::cout << "Max passangers: " << max_passangers << endl;
        std::cout << "Wingspan" << wingspan << endl;
        std::cout << "Max speed: " << Plane::max_speed << endl;
    }
};

int main() {

    MovingObject* a = new FutureCar(0, 5, 10);
    a->printData();
    return 0;

}
