// fichero 43937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43937;

Registro43937 crear_registro43937(int id) {
    Registro43937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43937(Registro43937 r) {
    return r.valor + r.id;
}
