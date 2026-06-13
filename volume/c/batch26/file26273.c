// fichero 26273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26273;

Registro26273 crear_registro26273(int id) {
    Registro26273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26273(Registro26273 r) {
    return r.valor + r.id;
}
