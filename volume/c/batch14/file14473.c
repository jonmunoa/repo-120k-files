// fichero 14473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14473;

Registro14473 crear_registro14473(int id) {
    Registro14473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14473(Registro14473 r) {
    return r.valor + r.id;
}
