// fichero 27833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27833;

Registro27833 crear_registro27833(int id) {
    Registro27833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27833(Registro27833 r) {
    return r.valor + r.id;
}
