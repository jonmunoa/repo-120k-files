// fichero 22717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22717;

Registro22717 crear_registro22717(int id) {
    Registro22717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22717(Registro22717 r) {
    return r.valor + r.id;
}
