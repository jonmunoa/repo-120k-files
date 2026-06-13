// fichero 53389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53389;

Registro53389 crear_registro53389(int id) {
    Registro53389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53389(Registro53389 r) {
    return r.valor + r.id;
}
