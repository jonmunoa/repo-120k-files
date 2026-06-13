// fichero 4665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4665;

Registro4665 crear_registro4665(int id) {
    Registro4665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4665(Registro4665 r) {
    return r.valor + r.id;
}
