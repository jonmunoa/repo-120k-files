// fichero 22677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22677;

Registro22677 crear_registro22677(int id) {
    Registro22677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22677(Registro22677 r) {
    return r.valor + r.id;
}
