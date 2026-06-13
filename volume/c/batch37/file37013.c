// fichero 37013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37013;

Registro37013 crear_registro37013(int id) {
    Registro37013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37013(Registro37013 r) {
    return r.valor + r.id;
}
