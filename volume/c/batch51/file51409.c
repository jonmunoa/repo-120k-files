// fichero 51409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51409;

Registro51409 crear_registro51409(int id) {
    Registro51409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51409(Registro51409 r) {
    return r.valor + r.id;
}
