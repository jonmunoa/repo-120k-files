// fichero 51249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51249;

Registro51249 crear_registro51249(int id) {
    Registro51249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51249(Registro51249 r) {
    return r.valor + r.id;
}
