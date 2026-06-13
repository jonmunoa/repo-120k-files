// fichero 22937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22937;

Registro22937 crear_registro22937(int id) {
    Registro22937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22937(Registro22937 r) {
    return r.valor + r.id;
}
