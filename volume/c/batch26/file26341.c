// fichero 26341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26341;

Registro26341 crear_registro26341(int id) {
    Registro26341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26341(Registro26341 r) {
    return r.valor + r.id;
}
