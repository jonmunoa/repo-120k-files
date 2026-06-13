// fichero 14605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14605;

Registro14605 crear_registro14605(int id) {
    Registro14605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14605(Registro14605 r) {
    return r.valor + r.id;
}
