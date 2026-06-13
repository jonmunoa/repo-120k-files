// fichero 29665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29665;

Registro29665 crear_registro29665(int id) {
    Registro29665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29665(Registro29665 r) {
    return r.valor + r.id;
}
