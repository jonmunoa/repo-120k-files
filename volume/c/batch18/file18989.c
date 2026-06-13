// fichero 18989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18989;

Registro18989 crear_registro18989(int id) {
    Registro18989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18989(Registro18989 r) {
    return r.valor + r.id;
}
