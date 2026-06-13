// fichero 51537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51537;

Registro51537 crear_registro51537(int id) {
    Registro51537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51537(Registro51537 r) {
    return r.valor + r.id;
}
