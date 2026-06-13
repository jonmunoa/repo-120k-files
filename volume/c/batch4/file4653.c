// fichero 4653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4653;

Registro4653 crear_registro4653(int id) {
    Registro4653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4653(Registro4653 r) {
    return r.valor + r.id;
}
