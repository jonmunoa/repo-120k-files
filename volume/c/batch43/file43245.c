// fichero 43245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43245;

Registro43245 crear_registro43245(int id) {
    Registro43245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43245(Registro43245 r) {
    return r.valor + r.id;
}
