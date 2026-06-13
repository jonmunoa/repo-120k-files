// fichero 3141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3141;

Registro3141 crear_registro3141(int id) {
    Registro3141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3141(Registro3141 r) {
    return r.valor + r.id;
}
