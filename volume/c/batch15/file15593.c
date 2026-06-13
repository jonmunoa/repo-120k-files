// fichero 15593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15593;

Registro15593 crear_registro15593(int id) {
    Registro15593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15593(Registro15593 r) {
    return r.valor + r.id;
}
