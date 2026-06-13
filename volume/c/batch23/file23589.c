// fichero 23589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23589;

Registro23589 crear_registro23589(int id) {
    Registro23589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23589(Registro23589 r) {
    return r.valor + r.id;
}
