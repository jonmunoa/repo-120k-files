// fichero 51061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51061;

Registro51061 crear_registro51061(int id) {
    Registro51061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51061(Registro51061 r) {
    return r.valor + r.id;
}
