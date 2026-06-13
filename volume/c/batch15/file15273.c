// fichero 15273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15273;

Registro15273 crear_registro15273(int id) {
    Registro15273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15273(Registro15273 r) {
    return r.valor + r.id;
}
