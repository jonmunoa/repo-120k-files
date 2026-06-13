// fichero 43509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43509;

Registro43509 crear_registro43509(int id) {
    Registro43509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43509(Registro43509 r) {
    return r.valor + r.id;
}
