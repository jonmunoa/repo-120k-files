// fichero 22505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22505;

Registro22505 crear_registro22505(int id) {
    Registro22505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22505(Registro22505 r) {
    return r.valor + r.id;
}
