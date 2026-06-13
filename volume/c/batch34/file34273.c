// fichero 34273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34273;

Registro34273 crear_registro34273(int id) {
    Registro34273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34273(Registro34273 r) {
    return r.valor + r.id;
}
