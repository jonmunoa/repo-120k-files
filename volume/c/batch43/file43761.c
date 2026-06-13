// fichero 43761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43761;

Registro43761 crear_registro43761(int id) {
    Registro43761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43761(Registro43761 r) {
    return r.valor + r.id;
}
