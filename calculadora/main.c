//
//  main.c
//  calculadora
//
//  Created by Miguel Angel Fernandez Carrillo on 17/08/2019.
//  Copyright © 2019 Miguel Angel Fernandez Carrillo. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Variables
    int x, y, suma, resta, multiplicacion, division;
    
    printf("Introduzca el primer numero:\n");
    scanf("%i", &x);
    
    printf("Introduzca el segundo numero:\n");
    scanf("%i", &y);
    
    suma = x + y;
    resta = x - y;
    multiplicacion = x * y;
    division = x / y;
    printf("La suma de %i y de %i es: %i\n", x, y, suma);
    printf("La resta de %i y de %i es: %i\n", x, y, resta);
    printf("La multiplicacion de %i y de %i es: %i\n", x, y, multiplicacion);
    printf("La division de %i y de %i es: %i\n", x, y, division);

    
    
    return 0;
}
