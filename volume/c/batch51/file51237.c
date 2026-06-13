// fichero 51237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51237;

Registro51237 crear_registro51237(int id) {
    Registro51237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51237(Registro51237 r) {
    return r.valor + r.id;
}
