// fichero 473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro473;

Registro473 crear_registro473(int id) {
    Registro473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro473(Registro473 r) {
    return r.valor + r.id;
}
