// fichero 19725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19725;

Registro19725 crear_registro19725(int id) {
    Registro19725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19725(Registro19725 r) {
    return r.valor + r.id;
}
