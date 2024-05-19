#include <iostream>

//Declaración de las funciones
int exponenteDos(int a);
void escribirCuadrad (int a);
void datosVariable(int* a);
void invertir(int* a, int* b);
void orden(int* a, int* b);

int main() {

}

int exponenteDos(int a)
{
    int cuadrado = a * a;
    return cuadrado;
}

void escribirCuadrad(int a)
{
    int cuadrado = a * a;
    std::cout << "El cuadrado es: " << cuadrado << std::endl;
}

void datosVariable(int* a)
{
    std::cout <<"La dirección de la variable es: " << a <<std::endl;
    std::cout <<"El contenido de la variable es: " << *a <<std::endl;
}

void invertir(int* a, int* b)
{
    int bandera = *a;
    *a = *b;
    *b = bandera;
}

void orden(int *a, int *b)
{
    int bandera;
    if(*a > *b) {
        bandera = * a;
        *a = *b;
        *b = bandera;
    }
}
