// fichero 15281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15281;

Registro15281 crear_registro15281(int id) {
    Registro15281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15281(Registro15281 r) {
    return r.valor + r.id;
}
