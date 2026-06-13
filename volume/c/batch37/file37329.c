// fichero 37329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37329;

Registro37329 crear_registro37329(int id) {
    Registro37329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37329(Registro37329 r) {
    return r.valor + r.id;
}
