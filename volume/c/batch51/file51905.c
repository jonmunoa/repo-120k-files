// fichero 51905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51905;

Registro51905 crear_registro51905(int id) {
    Registro51905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51905(Registro51905 r) {
    return r.valor + r.id;
}
