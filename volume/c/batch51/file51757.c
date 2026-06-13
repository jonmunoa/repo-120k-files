// fichero 51757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51757;

Registro51757 crear_registro51757(int id) {
    Registro51757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51757(Registro51757 r) {
    return r.valor + r.id;
}
