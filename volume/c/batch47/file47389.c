// fichero 47389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47389;

Registro47389 crear_registro47389(int id) {
    Registro47389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47389(Registro47389 r) {
    return r.valor + r.id;
}
