// fichero 34653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34653;

Registro34653 crear_registro34653(int id) {
    Registro34653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34653(Registro34653 r) {
    return r.valor + r.id;
}
