// fichero 43813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43813;

Registro43813 crear_registro43813(int id) {
    Registro43813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43813(Registro43813 r) {
    return r.valor + r.id;
}
