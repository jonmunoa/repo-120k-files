// fichero 37641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37641;

Registro37641 crear_registro37641(int id) {
    Registro37641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37641(Registro37641 r) {
    return r.valor + r.id;
}
