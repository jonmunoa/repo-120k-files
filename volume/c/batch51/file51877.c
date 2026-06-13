// fichero 51877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51877;

Registro51877 crear_registro51877(int id) {
    Registro51877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51877(Registro51877 r) {
    return r.valor + r.id;
}
