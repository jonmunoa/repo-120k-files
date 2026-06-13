// fichero 7605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7605;

Registro7605 crear_registro7605(int id) {
    Registro7605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7605(Registro7605 r) {
    return r.valor + r.id;
}
