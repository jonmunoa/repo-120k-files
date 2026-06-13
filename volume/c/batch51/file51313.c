// fichero 51313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51313;

Registro51313 crear_registro51313(int id) {
    Registro51313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51313(Registro51313 r) {
    return r.valor + r.id;
}
