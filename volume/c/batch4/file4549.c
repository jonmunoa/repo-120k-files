// fichero 4549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4549;

Registro4549 crear_registro4549(int id) {
    Registro4549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4549(Registro4549 r) {
    return r.valor + r.id;
}
