// fichero 37861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37861;

Registro37861 crear_registro37861(int id) {
    Registro37861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37861(Registro37861 r) {
    return r.valor + r.id;
}
