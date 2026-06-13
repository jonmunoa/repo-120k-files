// fichero 23321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23321;

Registro23321 crear_registro23321(int id) {
    Registro23321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23321(Registro23321 r) {
    return r.valor + r.id;
}
