// fichero 1405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1405;

Registro1405 crear_registro1405(int id) {
    Registro1405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1405(Registro1405 r) {
    return r.valor + r.id;
}
