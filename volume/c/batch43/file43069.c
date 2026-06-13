// fichero 43069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43069;

Registro43069 crear_registro43069(int id) {
    Registro43069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43069(Registro43069 r) {
    return r.valor + r.id;
}
