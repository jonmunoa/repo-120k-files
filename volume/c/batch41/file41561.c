// fichero 41561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41561;

Registro41561 crear_registro41561(int id) {
    Registro41561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41561(Registro41561 r) {
    return r.valor + r.id;
}
