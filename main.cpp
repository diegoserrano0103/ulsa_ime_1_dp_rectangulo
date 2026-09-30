// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"

// ¿por qué debe existir la función main()?
int main() {
    // 1. Variables (siempre inicializadas)
    //    TODO: ¿qué variables necesitas? ¿De qué tipo? ¿Con qué valor empiezan?
    double ancho = 0.0;
    double alto = 0.0;
    double area = 0.0;
    double perimetro = 0.0;


    std::cout << "Area y perimetro de un rectangulo\n";

    // 2. Entrada: el ancho
    //    TODO: lee el ancho con leerDecimal("...")
    //    TODO: ¿qué haces si es 0 o negativo? ¿Cuántas veces lo vuelves a pedir?
    
    while (true){
        ancho = leerDecimal ("Ingresa un valor para el ancho de la figura:");
        if (ancho <=0) {
            std::cout << "Ancho Invalido" << std::endl; 
        
        } else {
            break;
        }
    }

    // 3. Entrada: el alto
    //    TODO: mismo criterio que el ancho
   
    while (true){
        alto = leerDecimal ("Ingrese un valor para el alto de la figura:");
        if (alto <=0 ){
            std::cout << "Alto Invalido" << std::endl;
        }else {
            break;
        }
    }

    // 4. Proceso
    //    TODO: calcula el área y el perímetro
    //    ¿Estás seguro(a) del orden en que C++ hace las operaciones?

    area = alto * ancho;
 perimetro = 2 * (ancho + alto);
   

    // 5. Salida
    //    TODO: muestra el área y el perímetro, con sus unidades
    std::cout << "Resultados" << std::endl;
    std::cout << "Area " << area << "cm2\n";
    std::cout << "Perimetro" << perimetro << "cm\n";

    // ¿Qué significa return 0;?
    return 0;
}