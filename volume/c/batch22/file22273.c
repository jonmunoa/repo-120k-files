// fichero 22273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22273;

Registro22273 crear_registro22273(int id) {
    Registro22273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22273(Registro22273 r) {
    return r.valor + r.id;
}
