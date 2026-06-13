// fichero 14825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14825;

Registro14825 crear_registro14825(int id) {
    Registro14825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14825(Registro14825 r) {
    return r.valor + r.id;
}
