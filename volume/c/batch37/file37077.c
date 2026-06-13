// fichero 37077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37077;

Registro37077 crear_registro37077(int id) {
    Registro37077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37077(Registro37077 r) {
    return r.valor + r.id;
}
