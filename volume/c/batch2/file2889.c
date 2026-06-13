// fichero 2889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2889;

Registro2889 crear_registro2889(int id) {
    Registro2889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2889(Registro2889 r) {
    return r.valor + r.id;
}
