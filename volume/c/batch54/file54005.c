// fichero 54005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54005;

Registro54005 crear_registro54005(int id) {
    Registro54005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54005(Registro54005 r) {
    return r.valor + r.id;
}
