// fichero 51197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51197;

Registro51197 crear_registro51197(int id) {
    Registro51197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51197(Registro51197 r) {
    return r.valor + r.id;
}
