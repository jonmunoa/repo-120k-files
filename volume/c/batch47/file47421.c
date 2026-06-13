// fichero 47421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47421;

Registro47421 crear_registro47421(int id) {
    Registro47421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47421(Registro47421 r) {
    return r.valor + r.id;
}
