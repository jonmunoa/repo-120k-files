// fichero 16665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16665;

Registro16665 crear_registro16665(int id) {
    Registro16665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16665(Registro16665 r) {
    return r.valor + r.id;
}
