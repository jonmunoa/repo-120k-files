// fichero 6641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6641;

Registro6641 crear_registro6641(int id) {
    Registro6641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6641(Registro6641 r) {
    return r.valor + r.id;
}
