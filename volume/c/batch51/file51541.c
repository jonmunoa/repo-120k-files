// fichero 51541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51541;

Registro51541 crear_registro51541(int id) {
    Registro51541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51541(Registro51541 r) {
    return r.valor + r.id;
}
