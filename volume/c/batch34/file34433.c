// fichero 34433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34433;

Registro34433 crear_registro34433(int id) {
    Registro34433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34433(Registro34433 r) {
    return r.valor + r.id;
}
