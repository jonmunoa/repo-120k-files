// fichero 43913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43913;

Registro43913 crear_registro43913(int id) {
    Registro43913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43913(Registro43913 r) {
    return r.valor + r.id;
}
