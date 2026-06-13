// fichero 32013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32013;

Registro32013 crear_registro32013(int id) {
    Registro32013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32013(Registro32013 r) {
    return r.valor + r.id;
}
