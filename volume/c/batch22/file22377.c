// fichero 22377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22377;

Registro22377 crear_registro22377(int id) {
    Registro22377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22377(Registro22377 r) {
    return r.valor + r.id;
}
