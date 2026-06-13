// fichero 51581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51581;

Registro51581 crear_registro51581(int id) {
    Registro51581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51581(Registro51581 r) {
    return r.valor + r.id;
}
