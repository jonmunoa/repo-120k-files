// fichero 51821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51821;

Registro51821 crear_registro51821(int id) {
    Registro51821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51821(Registro51821 r) {
    return r.valor + r.id;
}
