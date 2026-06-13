// fichero 46673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46673;

Registro46673 crear_registro46673(int id) {
    Registro46673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46673(Registro46673 r) {
    return r.valor + r.id;
}
