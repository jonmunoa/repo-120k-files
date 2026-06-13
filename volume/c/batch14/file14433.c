// fichero 14433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14433;

Registro14433 crear_registro14433(int id) {
    Registro14433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14433(Registro14433 r) {
    return r.valor + r.id;
}
