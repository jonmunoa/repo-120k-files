// fichero 51301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51301;

Registro51301 crear_registro51301(int id) {
    Registro51301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51301(Registro51301 r) {
    return r.valor + r.id;
}
