// fichero 53593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53593;

Registro53593 crear_registro53593(int id) {
    Registro53593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53593(Registro53593 r) {
    return r.valor + r.id;
}
