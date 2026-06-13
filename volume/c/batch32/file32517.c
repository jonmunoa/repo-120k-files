// fichero 32517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32517;

Registro32517 crear_registro32517(int id) {
    Registro32517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32517(Registro32517 r) {
    return r.valor + r.id;
}
