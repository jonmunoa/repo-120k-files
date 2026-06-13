// fichero 26473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26473;

Registro26473 crear_registro26473(int id) {
    Registro26473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26473(Registro26473 r) {
    return r.valor + r.id;
}
