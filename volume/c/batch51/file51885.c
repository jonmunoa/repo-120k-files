// fichero 51885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51885;

Registro51885 crear_registro51885(int id) {
    Registro51885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51885(Registro51885 r) {
    return r.valor + r.id;
}
