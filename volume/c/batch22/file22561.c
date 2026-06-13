// fichero 22561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22561;

Registro22561 crear_registro22561(int id) {
    Registro22561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22561(Registro22561 r) {
    return r.valor + r.id;
}
