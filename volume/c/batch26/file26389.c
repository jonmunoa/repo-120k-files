// fichero 26389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26389;

Registro26389 crear_registro26389(int id) {
    Registro26389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26389(Registro26389 r) {
    return r.valor + r.id;
}
