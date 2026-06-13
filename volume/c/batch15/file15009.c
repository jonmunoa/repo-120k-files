// fichero 15009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15009;

Registro15009 crear_registro15009(int id) {
    Registro15009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15009(Registro15009 r) {
    return r.valor + r.id;
}
