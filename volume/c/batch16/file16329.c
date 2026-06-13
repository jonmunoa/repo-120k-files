// fichero 16329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16329;

Registro16329 crear_registro16329(int id) {
    Registro16329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16329(Registro16329 r) {
    return r.valor + r.id;
}
