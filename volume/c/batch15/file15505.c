// fichero 15505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15505;

Registro15505 crear_registro15505(int id) {
    Registro15505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15505(Registro15505 r) {
    return r.valor + r.id;
}
