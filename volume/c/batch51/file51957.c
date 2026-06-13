// fichero 51957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51957;

Registro51957 crear_registro51957(int id) {
    Registro51957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51957(Registro51957 r) {
    return r.valor + r.id;
}
