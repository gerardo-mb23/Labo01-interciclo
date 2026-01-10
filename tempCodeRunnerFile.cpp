#include <iostream>

using namespace std;

float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);
void menu();
int main()
{
    menu();

    return 0;
}

float sumar(float a, float b)
{
    return a + b;
}
float restar(float a, float b)
{
    return a - b;
}
float multiplicar(float a, float b)
{
    return a * b;
}
float dividir(float a, float b)
{
    if (b == 0)
    {
        cout << "Error. No se puede dividir entre 0." << endl;
        return 0;
    }
    return a / b;
}
void menu()
{
    int opcion;
    float n1, n2;

    do
    {

        cout << "\n--- CALCULADORA BASICA ---" << endl;
        cout << "1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4)
        {
            cout << "Ingrese el primer numero: ";
            cin >> n1;
            cout << "Ingrese el segundo numero: ";
            cin >> n2;
        }

        switch (opcion)
        {
        case 1:
            cout << "Resultado: " << sumar(n1, n2) << endl;
            break;
        case 2:
            cout << "Resultado: " << restar(n1, n2) << endl;
            break;
        case 3:
            cout << "Resultado: " << multiplicar(n1, n2) << endl;
            break;
        case 4:
            cout << "Resultado: " << dividir(n1, n2) << endl;
            break;
        case 5:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
        }
    } while (opcion != 5);
}
