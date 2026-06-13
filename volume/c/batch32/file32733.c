// fichero 32733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32733;

Registro32733 crear_registro32733(int id) {
    Registro32733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32733(Registro32733 r) {
    return r.valor + r.id;
}
