// fichero 24653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24653;

Registro24653 crear_registro24653(int id) {
    Registro24653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24653(Registro24653 r) {
    return r.valor + r.id;
}
