// fichero 14365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14365;

Registro14365 crear_registro14365(int id) {
    Registro14365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14365(Registro14365 r) {
    return r.valor + r.id;
}
