// fichero 26141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26141;

Registro26141 crear_registro26141(int id) {
    Registro26141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26141(Registro26141 r) {
    return r.valor + r.id;
}
