// fichero 46665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46665;

Registro46665 crear_registro46665(int id) {
    Registro46665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46665(Registro46665 r) {
    return r.valor + r.id;
}
