// fichero 34389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34389;

Registro34389 crear_registro34389(int id) {
    Registro34389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34389(Registro34389 r) {
    return r.valor + r.id;
}
