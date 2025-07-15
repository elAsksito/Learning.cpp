#include <iostream>
using namespace std;

int main(){
    // Hello World!
    cout << "Hello World!"  << endl;

    // Variables

    string name;
    int age;
    double salary;

    cout << "Por favor ingresa tu nombre:" << endl;
    getline(cin >> ws, name);

    cout << "Por favor ingresa tu edad:" << endl;
    cin >> age;

    cout << "Por favor ingresa tu sueldo:" << endl;
    cin >> salary;

    cout << "Hola " << name << endl;

    if (age <= 17) {
        cout << "Tienes " << age << " eres menor de edad" << endl;
    } else {
        cout << "Tienes " << age << " eres mayor de edad" << endl;
    }

    if (salary <= 1500) {
        cout << "Con tu sueldo " << salary << " eres un Junior" << endl;
    } else if (salary <= 4500) {
        cout << "Con tu sueldo " << salary << " eres un Semi Senior" << endl;
    } else {
        cout << "Con tu sueldo " << salary << " eres un Senior" << endl;
    }

    cout << "Fin del programa" << endl;

    return 0;
}