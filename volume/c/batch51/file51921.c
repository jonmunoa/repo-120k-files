// fichero 51921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51921;

Registro51921 crear_registro51921(int id) {
    Registro51921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51921(Registro51921 r) {
    return r.valor + r.id;
}
