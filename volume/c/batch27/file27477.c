// fichero 27477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27477;

Registro27477 crear_registro27477(int id) {
    Registro27477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27477(Registro27477 r) {
    return r.valor + r.id;
}
