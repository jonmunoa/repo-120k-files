// fichero 9685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9685;

Registro9685 crear_registro9685(int id) {
    Registro9685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9685(Registro9685 r) {
    return r.valor + r.id;
}
