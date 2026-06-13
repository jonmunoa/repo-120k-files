// fichero 51721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51721;

Registro51721 crear_registro51721(int id) {
    Registro51721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51721(Registro51721 r) {
    return r.valor + r.id;
}
