// fichero 22705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22705;

Registro22705 crear_registro22705(int id) {
    Registro22705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22705(Registro22705 r) {
    return r.valor + r.id;
}
