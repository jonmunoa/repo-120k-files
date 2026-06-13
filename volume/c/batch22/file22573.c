// fichero 22573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22573;

Registro22573 crear_registro22573(int id) {
    Registro22573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22573(Registro22573 r) {
    return r.valor + r.id;
}
