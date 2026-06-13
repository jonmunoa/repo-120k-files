// fichero 23965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23965;

Registro23965 crear_registro23965(int id) {
    Registro23965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23965(Registro23965 r) {
    return r.valor + r.id;
}
