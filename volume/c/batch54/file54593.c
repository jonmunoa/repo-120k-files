// fichero 54593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54593;

Registro54593 crear_registro54593(int id) {
    Registro54593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54593(Registro54593 r) {
    return r.valor + r.id;
}
