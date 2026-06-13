// fichero 42013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42013;

Registro42013 crear_registro42013(int id) {
    Registro42013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42013(Registro42013 r) {
    return r.valor + r.id;
}
