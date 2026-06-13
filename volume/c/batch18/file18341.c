// fichero 18341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18341;

Registro18341 crear_registro18341(int id) {
    Registro18341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18341(Registro18341 r) {
    return r.valor + r.id;
}
