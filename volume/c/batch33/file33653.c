// fichero 33653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33653;

Registro33653 crear_registro33653(int id) {
    Registro33653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33653(Registro33653 r) {
    return r.valor + r.id;
}
