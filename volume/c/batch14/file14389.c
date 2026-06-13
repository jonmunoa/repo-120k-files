// fichero 14389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14389;

Registro14389 crear_registro14389(int id) {
    Registro14389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14389(Registro14389 r) {
    return r.valor + r.id;
}
