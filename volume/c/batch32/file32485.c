// fichero 32485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32485;

Registro32485 crear_registro32485(int id) {
    Registro32485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32485(Registro32485 r) {
    return r.valor + r.id;
}
