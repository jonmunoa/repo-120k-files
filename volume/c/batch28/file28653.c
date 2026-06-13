// fichero 28653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28653;

Registro28653 crear_registro28653(int id) {
    Registro28653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28653(Registro28653 r) {
    return r.valor + r.id;
}
