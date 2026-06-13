// fichero 17341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17341;

Registro17341 crear_registro17341(int id) {
    Registro17341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17341(Registro17341 r) {
    return r.valor + r.id;
}
