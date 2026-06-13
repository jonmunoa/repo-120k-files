// fichero 39017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39017;

Registro39017 crear_registro39017(int id) {
    Registro39017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39017(Registro39017 r) {
    return r.valor + r.id;
}
