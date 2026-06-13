// fichero 2273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2273;

Registro2273 crear_registro2273(int id) {
    Registro2273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2273(Registro2273 r) {
    return r.valor + r.id;
}
