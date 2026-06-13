// fichero 51133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51133;

Registro51133 crear_registro51133(int id) {
    Registro51133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51133(Registro51133 r) {
    return r.valor + r.id;
}
