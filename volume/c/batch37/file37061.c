// fichero 37061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37061;

Registro37061 crear_registro37061(int id) {
    Registro37061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37061(Registro37061 r) {
    return r.valor + r.id;
}
