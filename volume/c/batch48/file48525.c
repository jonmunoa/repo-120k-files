// fichero 48525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48525;

Registro48525 crear_registro48525(int id) {
    Registro48525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48525(Registro48525 r) {
    return r.valor + r.id;
}
