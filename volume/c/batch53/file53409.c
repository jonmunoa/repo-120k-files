// fichero 53409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53409;

Registro53409 crear_registro53409(int id) {
    Registro53409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53409(Registro53409 r) {
    return r.valor + r.id;
}
