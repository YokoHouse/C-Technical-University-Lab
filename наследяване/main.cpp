#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
        int age;
        string name;
    public:
        Person(string name, int age):age(age), name(name){}
        
        void aboutMe() {
            cout << "IAM " << name << ".Iam " << age << " years old." << endl;
        }

};

class Worker : public Person{
    protected:
        int exp;
    public:
    Worker(string name, int age, int exp):Person(name, age), exp(exp) {}

    void aboutMe() {
            Person::aboutMe();
            cout << "IAM working for " << exp << " years." << endl;
        }
};

int main(){


    Worker w("Georgi", 25, 3);
    w.aboutMe();
    return 0;

}
