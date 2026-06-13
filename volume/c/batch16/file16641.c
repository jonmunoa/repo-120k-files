// fichero 16641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16641;

Registro16641 crear_registro16641(int id) {
    Registro16641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16641(Registro16641 r) {
    return r.valor + r.id;
}
