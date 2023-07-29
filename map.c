#include "map.h"

int mapRange(int input, int inputMin, int inputMax, float outputMin, float outputMax) {
    // Verificamos que el valor de entrada no exceda los límites
    if (input < inputMin)
        input = inputMin;
    else if (input > inputMax)
        input = inputMax;
    
    // Calculamos el factor de escala
    float inputRange = (float)(inputMax - inputMin);
    float outputRange = outputMax - outputMin;
    float scaleFactor = outputRange / inputRange;

    // Realizamos el mapeo y devolvemos el resultado
    float result = outputMin + (input - inputMin) * scaleFactor;
    return (int) result;
