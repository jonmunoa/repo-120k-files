// fichero 51325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51325;

Registro51325 crear_registro51325(int id) {
    Registro51325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51325(Registro51325 r) {
    return r.valor + r.id;
}
