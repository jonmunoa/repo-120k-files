// fichero 42525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42525;

Registro42525 crear_registro42525(int id) {
    Registro42525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42525(Registro42525 r) {
    return r.valor + r.id;
}
