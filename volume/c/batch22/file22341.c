// fichero 22341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22341;

Registro22341 crear_registro22341(int id) {
    Registro22341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22341(Registro22341 r) {
    return r.valor + r.id;
}
