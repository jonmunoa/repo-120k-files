// fichero 46641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46641;

Registro46641 crear_registro46641(int id) {
    Registro46641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46641(Registro46641 r) {
    return r.valor + r.id;
}
