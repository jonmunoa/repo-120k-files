// fichero 14357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14357;

Registro14357 crear_registro14357(int id) {
    Registro14357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14357(Registro14357 r) {
    return r.valor + r.id;
}
