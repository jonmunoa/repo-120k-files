// fichero 3389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3389;

Registro3389 crear_registro3389(int id) {
    Registro3389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3389(Registro3389 r) {
    return r.valor + r.id;
}
