// fichero 42373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42373;

Registro42373 crear_registro42373(int id) {
    Registro42373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42373(Registro42373 r) {
    return r.valor + r.id;
}
