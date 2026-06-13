// fichero 38473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38473;

Registro38473 crear_registro38473(int id) {
    Registro38473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38473(Registro38473 r) {
    return r.valor + r.id;
}
