// fichero 37477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37477;

Registro37477 crear_registro37477(int id) {
    Registro37477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37477(Registro37477 r) {
    return r.valor + r.id;
}
