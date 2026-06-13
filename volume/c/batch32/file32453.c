// fichero 32453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32453;

Registro32453 crear_registro32453(int id) {
    Registro32453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32453(Registro32453 r) {
    return r.valor + r.id;
}
