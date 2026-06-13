// fichero 22121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22121;

Registro22121 crear_registro22121(int id) {
    Registro22121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22121(Registro22121 r) {
    return r.valor + r.id;
}
