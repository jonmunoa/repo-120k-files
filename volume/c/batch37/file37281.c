// fichero 37281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37281;

Registro37281 crear_registro37281(int id) {
    Registro37281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37281(Registro37281 r) {
    return r.valor + r.id;
}
