// fichero 43973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43973;

Registro43973 crear_registro43973(int id) {
    Registro43973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43973(Registro43973 r) {
    return r.valor + r.id;
}
