// fichero 51517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51517;

Registro51517 crear_registro51517(int id) {
    Registro51517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51517(Registro51517 r) {
    return r.valor + r.id;
}
