// fichero 19825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19825;

Registro19825 crear_registro19825(int id) {
    Registro19825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19825(Registro19825 r) {
    return r.valor + r.id;
}
