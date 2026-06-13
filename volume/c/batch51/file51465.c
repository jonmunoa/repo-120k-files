// fichero 51465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51465;

Registro51465 crear_registro51465(int id) {
    Registro51465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51465(Registro51465 r) {
    return r.valor + r.id;
}
