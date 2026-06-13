// fichero 51913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51913;

Registro51913 crear_registro51913(int id) {
    Registro51913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51913(Registro51913 r) {
    return r.valor + r.id;
}
