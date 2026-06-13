// fichero 51097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51097;

Registro51097 crear_registro51097(int id) {
    Registro51097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51097(Registro51097 r) {
    return r.valor + r.id;
}
