// fichero 15577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15577;

Registro15577 crear_registro15577(int id) {
    Registro15577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15577(Registro15577 r) {
    return r.valor + r.id;
}
