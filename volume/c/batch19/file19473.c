// fichero 19473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19473;

Registro19473 crear_registro19473(int id) {
    Registro19473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19473(Registro19473 r) {
    return r.valor + r.id;
}
