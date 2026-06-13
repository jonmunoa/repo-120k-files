// fichero 45357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45357;

Registro45357 crear_registro45357(int id) {
    Registro45357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45357(Registro45357 r) {
    return r.valor + r.id;
}
