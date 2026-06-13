// fichero 31653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31653;

Registro31653 crear_registro31653(int id) {
    Registro31653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31653(Registro31653 r) {
    return r.valor + r.id;
}
