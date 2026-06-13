// fichero 32145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32145;

Registro32145 crear_registro32145(int id) {
    Registro32145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32145(Registro32145 r) {
    return r.valor + r.id;
}
