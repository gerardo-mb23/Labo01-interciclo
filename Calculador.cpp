#include <iostream>

using namespace std;

float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

int main()
{

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