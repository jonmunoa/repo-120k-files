// fichero 14421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14421;

Registro14421 crear_registro14421(int id) {
    Registro14421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14421(Registro14421 r) {
    return r.valor + r.id;
}
