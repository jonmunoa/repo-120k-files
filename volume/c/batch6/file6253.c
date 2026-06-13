// fichero 6253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6253;

Registro6253 crear_registro6253(int id) {
    Registro6253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6253(Registro6253 r) {
    return r.valor + r.id;
}
