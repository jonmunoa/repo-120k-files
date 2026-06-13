// fichero 4025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4025;

Registro4025 crear_registro4025(int id) {
    Registro4025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4025(Registro4025 r) {
    return r.valor + r.id;
}
