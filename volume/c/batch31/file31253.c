// fichero 31253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31253;

Registro31253 crear_registro31253(int id) {
    Registro31253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31253(Registro31253 r) {
    return r.valor + r.id;
}
