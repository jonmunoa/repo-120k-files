// fichero 37889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37889;

Registro37889 crear_registro37889(int id) {
    Registro37889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37889(Registro37889 r) {
    return r.valor + r.id;
}
