// fichero 51045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51045;

Registro51045 crear_registro51045(int id) {
    Registro51045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51045(Registro51045 r) {
    return r.valor + r.id;
}
