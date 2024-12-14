//Nombre: Escobedo Vargas Minerva Sarahi
//No.Control: 24041172

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char tipo;
    int tamano;
    float inicial, kilos, total;

    cout << "Dime el tipo de uva: ";
    cin >> tipo;
    tipo = toupper(tipo);

    if (tipo != 'A' && tipo != 'B') {
        cout << "Tipo de uva no válido. Por favor, ingrese A o B.";
        return 1;
    }

    cout << "Dime el tamaño de la uva: ";
    cin >> tamano;

    if (tamano != 1 && tamano != 2) {
        cout << "Tamaño de uva no válido. Por favor, ingrese 1 o 2.";
        return 1;
    }

    cout << "Dime cuántos kilos de uva se venden: ";
    cin >> kilos;

    if (kilos <= 0) {
        cout << "Cantidad de kilos no válida. Por favor, ingrese un valor mayor que 0.";
        return 1;
    }

    cout << "Dime el precio inicial por kilo: ";
    cin >> inicial;

    if (inicial <= 0) {
        cout << "Precio inicial no válido. Por favor, ingrese un valor mayor que 0.";
        return 1;
    }

    switch (tipo) {
        case 'A':
            switch (tamano) {
                case 1:
                    inicial += 0.2;
                    break;
                case 2:
                    inicial += 0.3;
                    break;
            }
            break;
        case 'B':
            switch (tamano) {
                case 1:
                    inicial -= 0.3;
                    break;
                case 2:
                    inicial -= 0.5;
                    break;
            }
            break;
    }

    total = kilos * inicial;

    cout << "La venta total es de: " << total;

    return 0;
}
