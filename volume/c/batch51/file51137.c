// fichero 51137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51137;

Registro51137 crear_registro51137(int id) {
    Registro51137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51137(Registro51137 r) {
    return r.valor + r.id;
}
