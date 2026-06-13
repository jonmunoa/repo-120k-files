// fichero 51709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51709;

Registro51709 crear_registro51709(int id) {
    Registro51709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51709(Registro51709 r) {
    return r.valor + r.id;
}
