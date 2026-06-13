// fichero 32093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32093;

Registro32093 crear_registro32093(int id) {
    Registro32093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32093(Registro32093 r) {
    return r.valor + r.id;
}
