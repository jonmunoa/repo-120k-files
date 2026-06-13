// fichero 33733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33733;

Registro33733 crear_registro33733(int id) {
    Registro33733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33733(Registro33733 r) {
    return r.valor + r.id;
}
