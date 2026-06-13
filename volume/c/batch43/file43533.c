// fichero 43533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43533;

Registro43533 crear_registro43533(int id) {
    Registro43533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43533(Registro43533 r) {
    return r.valor + r.id;
}
