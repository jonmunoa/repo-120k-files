// fichero 51265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51265;

Registro51265 crear_registro51265(int id) {
    Registro51265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51265(Registro51265 r) {
    return r.valor + r.id;
}
