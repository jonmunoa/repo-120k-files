// fichero 37393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37393;

Registro37393 crear_registro37393(int id) {
    Registro37393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37393(Registro37393 r) {
    return r.valor + r.id;
}
