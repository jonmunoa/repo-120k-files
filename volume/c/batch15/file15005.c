// fichero 15005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15005;

Registro15005 crear_registro15005(int id) {
    Registro15005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15005(Registro15005 r) {
    return r.valor + r.id;
}
