#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:


public:
    virtual void makeSound() = 0;

    virtual void eat() = 0;
};

class Cow : public Animal {
protected:
    int kg;
public:
    Cow(int kg) : kg(kg) {}

    void makeSound() {
        std::cout << "Muuu\n" << endl;
    }

    void eat() {
   
        std::cout << "Iam eeating wheat\n" << endl;
    }

    void howKg() {

        std::cout << "Iam " << kg << " kilograms\n" << endl;
    }

};

class Dog : public Animal {
protected:
    int age;
public:
    Dog(int age) : age(age) {}

    void makeSound() {
        std::cout << "Bau bau\n" << endl;
    }

    void eat() {

        std::cout << "Iam eeating meat\n" << endl;
    }

    void howOld() {

        std::cout << "Iam " << age << " years old \n" << endl;
    }
};
int main() {

    Cow krava(105);

    krava.makeSound();
    krava.eat();
    krava.howKg();

    Dog kuche(5);
    kuche.makeSound();
    kuche.eat();
    kuche.howOld();
}
