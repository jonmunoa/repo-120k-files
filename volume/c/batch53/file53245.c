// fichero 53245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53245;

Registro53245 crear_registro53245(int id) {
    Registro53245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53245(Registro53245 r) {
    return r.valor + r.id;
}
