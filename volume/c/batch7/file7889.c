// fichero 7889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7889;

Registro7889 crear_registro7889(int id) {
    Registro7889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7889(Registro7889 r) {
    return r.valor + r.id;
}
