// fichero 4209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4209;

Registro4209 crear_registro4209(int id) {
    Registro4209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4209(Registro4209 r) {
    return r.valor + r.id;
}
