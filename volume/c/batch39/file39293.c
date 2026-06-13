// fichero 39293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39293;

Registro39293 crear_registro39293(int id) {
    Registro39293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39293(Registro39293 r) {
    return r.valor + r.id;
}
