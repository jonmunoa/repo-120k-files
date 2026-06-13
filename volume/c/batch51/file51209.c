// fichero 51209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51209;

Registro51209 crear_registro51209(int id) {
    Registro51209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51209(Registro51209 r) {
    return r.valor + r.id;
}
