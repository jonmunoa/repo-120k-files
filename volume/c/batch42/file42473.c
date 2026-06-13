// fichero 42473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42473;

Registro42473 crear_registro42473(int id) {
    Registro42473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42473(Registro42473 r) {
    return r.valor + r.id;
}
