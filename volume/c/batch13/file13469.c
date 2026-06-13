// fichero 13469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13469;

Registro13469 crear_registro13469(int id) {
    Registro13469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13469(Registro13469 r) {
    return r.valor + r.id;
}
