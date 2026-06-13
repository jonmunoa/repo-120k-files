// fichero 51345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51345;

Registro51345 crear_registro51345(int id) {
    Registro51345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51345(Registro51345 r) {
    return r.valor + r.id;
}
