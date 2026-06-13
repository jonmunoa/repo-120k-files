// fichero 19653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19653;

Registro19653 crear_registro19653(int id) {
    Registro19653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19653(Registro19653 r) {
    return r.valor + r.id;
}
