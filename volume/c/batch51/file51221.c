// fichero 51221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51221;

Registro51221 crear_registro51221(int id) {
    Registro51221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51221(Registro51221 r) {
    return r.valor + r.id;
}
