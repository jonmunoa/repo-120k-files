// fichero 37813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37813;

Registro37813 crear_registro37813(int id) {
    Registro37813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37813(Registro37813 r) {
    return r.valor + r.id;
}
