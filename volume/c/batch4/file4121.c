// fichero 4121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4121;

Registro4121 crear_registro4121(int id) {
    Registro4121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4121(Registro4121 r) {
    return r.valor + r.id;
}
