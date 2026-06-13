// fichero 38089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38089;

Registro38089 crear_registro38089(int id) {
    Registro38089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38089(Registro38089 r) {
    return r.valor + r.id;
}
