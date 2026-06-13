// fichero 42709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42709;

Registro42709 crear_registro42709(int id) {
    Registro42709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42709(Registro42709 r) {
    return r.valor + r.id;
}
