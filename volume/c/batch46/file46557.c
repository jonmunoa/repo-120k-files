// fichero 46557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46557;

Registro46557 crear_registro46557(int id) {
    Registro46557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46557(Registro46557 r) {
    return r.valor + r.id;
}
