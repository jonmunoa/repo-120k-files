// fichero 35389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35389;

Registro35389 crear_registro35389(int id) {
    Registro35389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35389(Registro35389 r) {
    return r.valor + r.id;
}
