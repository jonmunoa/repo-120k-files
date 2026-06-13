// fichero 14045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14045;

Registro14045 crear_registro14045(int id) {
    Registro14045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14045(Registro14045 r) {
    return r.valor + r.id;
}
