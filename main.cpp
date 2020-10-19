// ------------------------------------------------------------------------------
// 
//   Nombre:  
//   Autor: Unai De Zía
//   Fecha: 
//   Licencia: CC BY-NC 4.0 https://creativecommons.org/licenses/by-nc/4.0/
// 
// ------------------------------------------------------------------------------
 
#include <iostream>
#include <vector> 

// Entorno global
 
int main(int argc, char** argv) {
 
    // Tíldes
    setlocale(LC_ALL, "spanish");
 
    // Entorno local
    int value = 5;
    std::vector<int> vvalue;

    vvalue.push_back(value);

    for (int i : vvalue)
    {
        std::cout << i << std::endl;
    }


    // Espera tecla
    std::cin.get();
 
    // Devuelve 0 si se ejecuta correctamente
    return 0;
}