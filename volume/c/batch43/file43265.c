// fichero 43265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43265;

Registro43265 crear_registro43265(int id) {
    Registro43265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43265(Registro43265 r) {
    return r.valor + r.id;
}
