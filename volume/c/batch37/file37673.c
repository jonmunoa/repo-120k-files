// fichero 37673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37673;

Registro37673 crear_registro37673(int id) {
    Registro37673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37673(Registro37673 r) {
    return r.valor + r.id;
}
