// fichero 51857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51857;

Registro51857 crear_registro51857(int id) {
    Registro51857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51857(Registro51857 r) {
    return r.valor + r.id;
}
