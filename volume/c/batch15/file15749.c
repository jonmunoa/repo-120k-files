// fichero 15749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15749;

Registro15749 crear_registro15749(int id) {
    Registro15749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15749(Registro15749 r) {
    return r.valor + r.id;
}
