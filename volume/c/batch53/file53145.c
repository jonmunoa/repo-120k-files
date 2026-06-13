// fichero 53145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53145;

Registro53145 crear_registro53145(int id) {
    Registro53145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53145(Registro53145 r) {
    return r.valor + r.id;
}
