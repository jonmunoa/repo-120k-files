// fichero 10945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10945;

Registro10945 crear_registro10945(int id) {
    Registro10945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10945(Registro10945 r) {
    return r.valor + r.id;
}
