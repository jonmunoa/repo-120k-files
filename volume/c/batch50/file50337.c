// fichero 50337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50337;

Registro50337 crear_registro50337(int id) {
    Registro50337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50337(Registro50337 r) {
    return r.valor + r.id;
}
