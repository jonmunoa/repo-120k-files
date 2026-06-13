// fichero 51241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51241;

Registro51241 crear_registro51241(int id) {
    Registro51241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51241(Registro51241 r) {
    return r.valor + r.id;
}
