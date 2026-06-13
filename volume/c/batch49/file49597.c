// fichero 49597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49597;

Registro49597 crear_registro49597(int id) {
    Registro49597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49597(Registro49597 r) {
    return r.valor + r.id;
}
