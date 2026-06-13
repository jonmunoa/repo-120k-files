// fichero 1477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1477;

Registro1477 crear_registro1477(int id) {
    Registro1477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1477(Registro1477 r) {
    return r.valor + r.id;
}
