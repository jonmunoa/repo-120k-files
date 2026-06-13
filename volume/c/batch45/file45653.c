// fichero 45653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45653;

Registro45653 crear_registro45653(int id) {
    Registro45653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45653(Registro45653 r) {
    return r.valor + r.id;
}
