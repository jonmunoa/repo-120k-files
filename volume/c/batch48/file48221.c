// fichero 48221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48221;

Registro48221 crear_registro48221(int id) {
    Registro48221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48221(Registro48221 r) {
    return r.valor + r.id;
}
