// fichero 37657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37657;

Registro37657 crear_registro37657(int id) {
    Registro37657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37657(Registro37657 r) {
    return r.valor + r.id;
}
