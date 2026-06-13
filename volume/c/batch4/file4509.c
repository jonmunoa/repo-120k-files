// fichero 4509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4509;

Registro4509 crear_registro4509(int id) {
    Registro4509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4509(Registro4509 r) {
    return r.valor + r.id;
}
