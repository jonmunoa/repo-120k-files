// fichero 22005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22005;

Registro22005 crear_registro22005(int id) {
    Registro22005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22005(Registro22005 r) {
    return r.valor + r.id;
}
