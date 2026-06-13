// fichero 19481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19481;

Registro19481 crear_registro19481(int id) {
    Registro19481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19481(Registro19481 r) {
    return r.valor + r.id;
}
