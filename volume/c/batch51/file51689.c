// fichero 51689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51689;

Registro51689 crear_registro51689(int id) {
    Registro51689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51689(Registro51689 r) {
    return r.valor + r.id;
}
