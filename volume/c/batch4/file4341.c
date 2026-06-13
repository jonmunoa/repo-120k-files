// fichero 4341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4341;

Registro4341 crear_registro4341(int id) {
    Registro4341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4341(Registro4341 r) {
    return r.valor + r.id;
}
