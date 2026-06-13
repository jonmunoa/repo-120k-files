// fichero 22237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22237;

Registro22237 crear_registro22237(int id) {
    Registro22237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22237(Registro22237 r) {
    return r.valor + r.id;
}
