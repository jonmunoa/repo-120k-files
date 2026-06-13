// fichero 22117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22117;

Registro22117 crear_registro22117(int id) {
    Registro22117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22117(Registro22117 r) {
    return r.valor + r.id;
}
