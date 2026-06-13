// fichero 43517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43517;

Registro43517 crear_registro43517(int id) {
    Registro43517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43517(Registro43517 r) {
    return r.valor + r.id;
}
