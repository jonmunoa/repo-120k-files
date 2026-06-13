// fichero 46389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46389;

Registro46389 crear_registro46389(int id) {
    Registro46389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46389(Registro46389 r) {
    return r.valor + r.id;
}
