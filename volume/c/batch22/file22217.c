// fichero 22217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22217;

Registro22217 crear_registro22217(int id) {
    Registro22217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22217(Registro22217 r) {
    return r.valor + r.id;
}
