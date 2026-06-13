// fichero 54973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54973;

Registro54973 crear_registro54973(int id) {
    Registro54973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54973(Registro54973 r) {
    return r.valor + r.id;
}
