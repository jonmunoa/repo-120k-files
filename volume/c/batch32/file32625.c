// fichero 32625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32625;

Registro32625 crear_registro32625(int id) {
    Registro32625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32625(Registro32625 r) {
    return r.valor + r.id;
}
