// fichero 33889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33889;

Registro33889 crear_registro33889(int id) {
    Registro33889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33889(Registro33889 r) {
    return r.valor + r.id;
}
