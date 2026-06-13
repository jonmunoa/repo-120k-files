// fichero 23873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23873;

Registro23873 crear_registro23873(int id) {
    Registro23873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23873(Registro23873 r) {
    return r.valor + r.id;
}
