// fichero 37245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37245;

Registro37245 crear_registro37245(int id) {
    Registro37245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37245(Registro37245 r) {
    return r.valor + r.id;
}
