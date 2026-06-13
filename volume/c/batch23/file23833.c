// fichero 23833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23833;

Registro23833 crear_registro23833(int id) {
    Registro23833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23833(Registro23833 r) {
    return r.valor + r.id;
}
