// fichero 27473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27473;

Registro27473 crear_registro27473(int id) {
    Registro27473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27473(Registro27473 r) {
    return r.valor + r.id;
}
