// fichero 22653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22653;

Registro22653 crear_registro22653(int id) {
    Registro22653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22653(Registro22653 r) {
    return r.valor + r.id;
}
