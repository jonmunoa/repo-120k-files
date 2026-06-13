// fichero 51089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51089;

Registro51089 crear_registro51089(int id) {
    Registro51089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51089(Registro51089 r) {
    return r.valor + r.id;
}
