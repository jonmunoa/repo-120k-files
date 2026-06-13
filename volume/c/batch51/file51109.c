// fichero 51109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51109;

Registro51109 crear_registro51109(int id) {
    Registro51109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51109(Registro51109 r) {
    return r.valor + r.id;
}
