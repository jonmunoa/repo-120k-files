// fichero 43833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43833;

Registro43833 crear_registro43833(int id) {
    Registro43833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43833(Registro43833 r) {
    return r.valor + r.id;
}
