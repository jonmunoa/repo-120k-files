// fichero 22833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22833;

Registro22833 crear_registro22833(int id) {
    Registro22833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22833(Registro22833 r) {
    return r.valor + r.id;
}
