// fichero 51705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51705;

Registro51705 crear_registro51705(int id) {
    Registro51705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51705(Registro51705 r) {
    return r.valor + r.id;
}
