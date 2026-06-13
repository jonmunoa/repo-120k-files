// fichero 51277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51277;

Registro51277 crear_registro51277(int id) {
    Registro51277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51277(Registro51277 r) {
    return r.valor + r.id;
}
