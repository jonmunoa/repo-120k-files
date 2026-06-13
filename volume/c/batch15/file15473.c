// fichero 15473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15473;

Registro15473 crear_registro15473(int id) {
    Registro15473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15473(Registro15473 r) {
    return r.valor + r.id;
}
