// fichero 43817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43817;

Registro43817 crear_registro43817(int id) {
    Registro43817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43817(Registro43817 r) {
    return r.valor + r.id;
}
