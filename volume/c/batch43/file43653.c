// fichero 43653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43653;

Registro43653 crear_registro43653(int id) {
    Registro43653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43653(Registro43653 r) {
    return r.valor + r.id;
}
