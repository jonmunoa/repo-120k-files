// fichero 6653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6653;

Registro6653 crear_registro6653(int id) {
    Registro6653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6653(Registro6653 r) {
    return r.valor + r.id;
}
