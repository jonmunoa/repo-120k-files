// fichero 22445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22445;

Registro22445 crear_registro22445(int id) {
    Registro22445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22445(Registro22445 r) {
    return r.valor + r.id;
}
