// fichero 43165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43165;

Registro43165 crear_registro43165(int id) {
    Registro43165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43165(Registro43165 r) {
    return r.valor + r.id;
}
