// fichero 51789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51789;

Registro51789 crear_registro51789(int id) {
    Registro51789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51789(Registro51789 r) {
    return r.valor + r.id;
}
