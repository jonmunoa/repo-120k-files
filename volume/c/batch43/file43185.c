// fichero 43185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43185;

Registro43185 crear_registro43185(int id) {
    Registro43185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43185(Registro43185 r) {
    return r.valor + r.id;
}
