// fichero 3653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3653;

Registro3653 crear_registro3653(int id) {
    Registro3653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3653(Registro3653 r) {
    return r.valor + r.id;
}
