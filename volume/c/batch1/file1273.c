// fichero 1273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1273;

Registro1273 crear_registro1273(int id) {
    Registro1273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1273(Registro1273 r) {
    return r.valor + r.id;
}
