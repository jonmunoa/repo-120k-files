// fichero 22501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22501;

Registro22501 crear_registro22501(int id) {
    Registro22501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22501(Registro22501 r) {
    return r.valor + r.id;
}
