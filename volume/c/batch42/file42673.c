// fichero 42673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42673;

Registro42673 crear_registro42673(int id) {
    Registro42673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42673(Registro42673 r) {
    return r.valor + r.id;
}
