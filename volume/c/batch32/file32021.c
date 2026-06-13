// fichero 32021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32021;

Registro32021 crear_registro32021(int id) {
    Registro32021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32021(Registro32021 r) {
    return r.valor + r.id;
}
