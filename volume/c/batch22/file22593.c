// fichero 22593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22593;

Registro22593 crear_registro22593(int id) {
    Registro22593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22593(Registro22593 r) {
    return r.valor + r.id;
}
