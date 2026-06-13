// fichero 51793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51793;

Registro51793 crear_registro51793(int id) {
    Registro51793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51793(Registro51793 r) {
    return r.valor + r.id;
}
