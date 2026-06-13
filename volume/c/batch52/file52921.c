// fichero 52921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52921;

Registro52921 crear_registro52921(int id) {
    Registro52921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52921(Registro52921 r) {
    return r.valor + r.id;
}
