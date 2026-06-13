// fichero 22317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22317;

Registro22317 crear_registro22317(int id) {
    Registro22317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22317(Registro22317 r) {
    return r.valor + r.id;
}
