// fichero 51977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51977;

Registro51977 crear_registro51977(int id) {
    Registro51977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51977(Registro51977 r) {
    return r.valor + r.id;
}
