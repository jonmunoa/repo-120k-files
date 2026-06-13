// fichero 22289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22289;

Registro22289 crear_registro22289(int id) {
    Registro22289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22289(Registro22289 r) {
    return r.valor + r.id;
}
