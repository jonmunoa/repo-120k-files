// fichero 45561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45561;

Registro45561 crear_registro45561(int id) {
    Registro45561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45561(Registro45561 r) {
    return r.valor + r.id;
}
