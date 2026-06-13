// fichero 39373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39373;

Registro39373 crear_registro39373(int id) {
    Registro39373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39373(Registro39373 r) {
    return r.valor + r.id;
}
