// fichero 4813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4813;

Registro4813 crear_registro4813(int id) {
    Registro4813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4813(Registro4813 r) {
    return r.valor + r.id;
}
