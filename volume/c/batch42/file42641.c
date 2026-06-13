// fichero 42641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42641;

Registro42641 crear_registro42641(int id) {
    Registro42641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42641(Registro42641 r) {
    return r.valor + r.id;
}
