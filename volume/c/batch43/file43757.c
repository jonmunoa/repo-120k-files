// fichero 43757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43757;

Registro43757 crear_registro43757(int id) {
    Registro43757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43757(Registro43757 r) {
    return r.valor + r.id;
}
