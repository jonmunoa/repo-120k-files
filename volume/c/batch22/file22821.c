// fichero 22821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22821;

Registro22821 crear_registro22821(int id) {
    Registro22821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22821(Registro22821 r) {
    return r.valor + r.id;
}
