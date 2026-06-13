// fichero 4957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4957;

Registro4957 crear_registro4957(int id) {
    Registro4957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4957(Registro4957 r) {
    return r.valor + r.id;
}
