// fichero 51729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51729;

Registro51729 crear_registro51729(int id) {
    Registro51729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51729(Registro51729 r) {
    return r.valor + r.id;
}
