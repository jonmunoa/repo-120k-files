// fichero 7021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7021;

Registro7021 crear_registro7021(int id) {
    Registro7021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7021(Registro7021 r) {
    return r.valor + r.id;
}
