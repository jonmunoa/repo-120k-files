// fichero 2141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2141;

Registro2141 crear_registro2141(int id) {
    Registro2141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2141(Registro2141 r) {
    return r.valor + r.id;
}
