// fichero 46713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46713;

Registro46713 crear_registro46713(int id) {
    Registro46713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46713(Registro46713 r) {
    return r.valor + r.id;
}
