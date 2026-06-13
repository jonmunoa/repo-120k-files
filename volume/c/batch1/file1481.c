// fichero 1481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1481;

Registro1481 crear_registro1481(int id) {
    Registro1481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1481(Registro1481 r) {
    return r.valor + r.id;
}
