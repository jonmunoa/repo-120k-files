// fichero 32029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32029;

Registro32029 crear_registro32029(int id) {
    Registro32029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32029(Registro32029 r) {
    return r.valor + r.id;
}
