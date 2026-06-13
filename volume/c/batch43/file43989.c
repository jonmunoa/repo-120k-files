// fichero 43989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43989;

Registro43989 crear_registro43989(int id) {
    Registro43989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43989(Registro43989 r) {
    return r.valor + r.id;
}
