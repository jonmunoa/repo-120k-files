// fichero 43453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43453;

Registro43453 crear_registro43453(int id) {
    Registro43453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43453(Registro43453 r) {
    return r.valor + r.id;
}
