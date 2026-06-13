// fichero 23405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23405;

Registro23405 crear_registro23405(int id) {
    Registro23405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23405(Registro23405 r) {
    return r.valor + r.id;
}
