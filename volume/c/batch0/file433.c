// fichero 433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro433;

Registro433 crear_registro433(int id) {
    Registro433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro433(Registro433 r) {
    return r.valor + r.id;
}
