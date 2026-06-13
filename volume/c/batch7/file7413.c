// fichero 7413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7413;

Registro7413 crear_registro7413(int id) {
    Registro7413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7413(Registro7413 r) {
    return r.valor + r.id;
}
