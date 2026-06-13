// fichero 51453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51453;

Registro51453 crear_registro51453(int id) {
    Registro51453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51453(Registro51453 r) {
    return r.valor + r.id;
}
