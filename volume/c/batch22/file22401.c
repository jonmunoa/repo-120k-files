// fichero 22401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22401;

Registro22401 crear_registro22401(int id) {
    Registro22401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22401(Registro22401 r) {
    return r.valor + r.id;
}
