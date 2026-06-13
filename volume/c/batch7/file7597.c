// fichero 7597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7597;

Registro7597 crear_registro7597(int id) {
    Registro7597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7597(Registro7597 r) {
    return r.valor + r.id;
}
