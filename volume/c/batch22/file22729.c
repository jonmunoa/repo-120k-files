// fichero 22729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22729;

Registro22729 crear_registro22729(int id) {
    Registro22729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22729(Registro22729 r) {
    return r.valor + r.id;
}
