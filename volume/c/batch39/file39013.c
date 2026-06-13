// fichero 39013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39013;

Registro39013 crear_registro39013(int id) {
    Registro39013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39013(Registro39013 r) {
    return r.valor + r.id;
}
