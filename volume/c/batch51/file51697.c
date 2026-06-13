// fichero 51697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51697;

Registro51697 crear_registro51697(int id) {
    Registro51697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51697(Registro51697 r) {
    return r.valor + r.id;
}
