// fichero 23301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23301;

Registro23301 crear_registro23301(int id) {
    Registro23301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23301(Registro23301 r) {
    return r.valor + r.id;
}
