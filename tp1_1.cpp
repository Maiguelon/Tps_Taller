#include <iostream>

int main() {
    int variable = 12;  
    int* puntero = &variable;  

    // 1) El contenido del puntero 
    std::cout << "Contenido del puntero (valor de la variable): " << *puntero << std::endl;

    // 2) La dirección de memoria 
    std::cout << "Direccion de memoria almacenada por el puntero: " << puntero << std::endl;

    // 3) La dirección de memoria de la variable
    std::cout << "Direccion de memoria de la variable: " << &variable << std::endl;

    // 4) La dirección de memoria del puntero
    std::cout << "Direccion de memoria del puntero: " << &puntero << std::endl;

    // 5) El tamaño de memoria utilizado 
    std::cout << "Tamanio de memoria utilizado por la variable: " << sizeof(variable) << " bytes" << std::endl;

    return 0;
}
