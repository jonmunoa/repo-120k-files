// fichero 8141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8141;

Registro8141 crear_registro8141(int id) {
    Registro8141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8141(Registro8141 r) {
    return r.valor + r.id;
}
