// fichero 19045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19045;

Registro19045 crear_registro19045(int id) {
    Registro19045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19045(Registro19045 r) {
    return r.valor + r.id;
}
