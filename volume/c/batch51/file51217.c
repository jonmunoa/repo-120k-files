// fichero 51217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51217;

Registro51217 crear_registro51217(int id) {
    Registro51217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51217(Registro51217 r) {
    return r.valor + r.id;
}
