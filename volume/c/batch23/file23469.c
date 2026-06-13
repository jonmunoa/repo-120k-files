// fichero 23469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23469;

Registro23469 crear_registro23469(int id) {
    Registro23469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23469(Registro23469 r) {
    return r.valor + r.id;
}
