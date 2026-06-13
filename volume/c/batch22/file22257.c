// fichero 22257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22257;

Registro22257 crear_registro22257(int id) {
    Registro22257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22257(Registro22257 r) {
    return r.valor + r.id;
}
