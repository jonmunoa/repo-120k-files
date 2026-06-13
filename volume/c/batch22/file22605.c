// fichero 22605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22605;

Registro22605 crear_registro22605(int id) {
    Registro22605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22605(Registro22605 r) {
    return r.valor + r.id;
}
