// fichero 32825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32825;

Registro32825 crear_registro32825(int id) {
    Registro32825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32825(Registro32825 r) {
    return r.valor + r.id;
}
