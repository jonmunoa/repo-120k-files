// fichero 51125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51125;

Registro51125 crear_registro51125(int id) {
    Registro51125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51125(Registro51125 r) {
    return r.valor + r.id;
}
