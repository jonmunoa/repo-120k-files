// fichero 51129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51129;

Registro51129 crear_registro51129(int id) {
    Registro51129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51129(Registro51129 r) {
    return r.valor + r.id;
}
