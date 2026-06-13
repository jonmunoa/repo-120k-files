// fichero 51149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51149;

Registro51149 crear_registro51149(int id) {
    Registro51149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51149(Registro51149 r) {
    return r.valor + r.id;
}
