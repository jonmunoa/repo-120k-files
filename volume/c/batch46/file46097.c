// fichero 46097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46097;

Registro46097 crear_registro46097(int id) {
    Registro46097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46097(Registro46097 r) {
    return r.valor + r.id;
}
