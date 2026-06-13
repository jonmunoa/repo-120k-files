// fichero 4269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4269;

Registro4269 crear_registro4269(int id) {
    Registro4269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4269(Registro4269 r) {
    return r.valor + r.id;
}
