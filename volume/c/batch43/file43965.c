// fichero 43965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43965;

Registro43965 crear_registro43965(int id) {
    Registro43965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43965(Registro43965 r) {
    return r.valor + r.id;
}
