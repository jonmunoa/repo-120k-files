// fichero 22861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22861;

Registro22861 crear_registro22861(int id) {
    Registro22861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22861(Registro22861 r) {
    return r.valor + r.id;
}
