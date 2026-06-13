// fichero 39653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39653;

Registro39653 crear_registro39653(int id) {
    Registro39653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39653(Registro39653 r) {
    return r.valor + r.id;
}
