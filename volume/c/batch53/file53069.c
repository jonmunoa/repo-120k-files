// fichero 53069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53069;

Registro53069 crear_registro53069(int id) {
    Registro53069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53069(Registro53069 r) {
    return r.valor + r.id;
}
