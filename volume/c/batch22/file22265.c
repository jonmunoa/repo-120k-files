// fichero 22265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22265;

Registro22265 crear_registro22265(int id) {
    Registro22265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22265(Registro22265 r) {
    return r.valor + r.id;
}
