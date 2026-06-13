// fichero 22077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22077;

Registro22077 crear_registro22077(int id) {
    Registro22077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22077(Registro22077 r) {
    return r.valor + r.id;
}
