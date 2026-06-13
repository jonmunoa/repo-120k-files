// fichero 7121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7121;

Registro7121 crear_registro7121(int id) {
    Registro7121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7121(Registro7121 r) {
    return r.valor + r.id;
}
