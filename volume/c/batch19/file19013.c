// fichero 19013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19013;

Registro19013 crear_registro19013(int id) {
    Registro19013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19013(Registro19013 r) {
    return r.valor + r.id;
}
