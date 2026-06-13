// fichero 15817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15817;

Registro15817 crear_registro15817(int id) {
    Registro15817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15817(Registro15817 r) {
    return r.valor + r.id;
}
