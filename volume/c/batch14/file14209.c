// fichero 14209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14209;

Registro14209 crear_registro14209(int id) {
    Registro14209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14209(Registro14209 r) {
    return r.valor + r.id;
}
