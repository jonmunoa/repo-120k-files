// fichero 23541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23541;

Registro23541 crear_registro23541(int id) {
    Registro23541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23541(Registro23541 r) {
    return r.valor + r.id;
}
