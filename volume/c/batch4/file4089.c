// fichero 4089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4089;

Registro4089 crear_registro4089(int id) {
    Registro4089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4089(Registro4089 r) {
    return r.valor + r.id;
}
