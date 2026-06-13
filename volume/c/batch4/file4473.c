// fichero 4473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4473;

Registro4473 crear_registro4473(int id) {
    Registro4473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4473(Registro4473 r) {
    return r.valor + r.id;
}
