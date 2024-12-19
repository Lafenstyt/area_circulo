#include <iostream>
using namespace std;


float calcularAreaCirculo(float radio) {
    const float pi = 3.14159265359;
    return pi * radio * radio;
}

int main() {
    float radio;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    
    
    float area = calcularAreaCirculo(radio);
    cout << "El área del círculo es: " << area << endl;
    
    return 0; 
}
