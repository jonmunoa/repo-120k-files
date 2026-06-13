// fichero 51037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51037;

Registro51037 crear_registro51037(int id) {
    Registro51037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51037(Registro51037 r) {
    return r.valor + r.id;
}
