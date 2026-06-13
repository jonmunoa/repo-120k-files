// fichero 43881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43881;

Registro43881 crear_registro43881(int id) {
    Registro43881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43881(Registro43881 r) {
    return r.valor + r.id;
}
