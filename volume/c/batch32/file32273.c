// fichero 32273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32273;

Registro32273 crear_registro32273(int id) {
    Registro32273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32273(Registro32273 r) {
    return r.valor + r.id;
}
