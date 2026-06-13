// fichero 22817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22817;

Registro22817 crear_registro22817(int id) {
    Registro22817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22817(Registro22817 r) {
    return r.valor + r.id;
}
