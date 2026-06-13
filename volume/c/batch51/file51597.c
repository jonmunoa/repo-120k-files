// fichero 51597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51597;

Registro51597 crear_registro51597(int id) {
    Registro51597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51597(Registro51597 r) {
    return r.valor + r.id;
}
