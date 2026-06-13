// fichero 40337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40337;

Registro40337 crear_registro40337(int id) {
    Registro40337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40337(Registro40337 r) {
    return r.valor + r.id;
}
