// fichero 42729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42729;

Registro42729 crear_registro42729(int id) {
    Registro42729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42729(Registro42729 r) {
    return r.valor + r.id;
}
