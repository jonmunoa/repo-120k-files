// fichero 46517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46517;

Registro46517 crear_registro46517(int id) {
    Registro46517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46517(Registro46517 r) {
    return r.valor + r.id;
}
