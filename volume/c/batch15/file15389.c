// fichero 15389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15389;

Registro15389 crear_registro15389(int id) {
    Registro15389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15389(Registro15389 r) {
    return r.valor + r.id;
}
