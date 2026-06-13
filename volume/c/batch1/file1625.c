// fichero 1625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1625;

Registro1625 crear_registro1625(int id) {
    Registro1625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1625(Registro1625 r) {
    return r.valor + r.id;
}
