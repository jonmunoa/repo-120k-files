// fichero 22997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22997;

Registro22997 crear_registro22997(int id) {
    Registro22997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22997(Registro22997 r) {
    return r.valor + r.id;
}
