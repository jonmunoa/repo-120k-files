// fichero 15317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15317;

Registro15317 crear_registro15317(int id) {
    Registro15317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15317(Registro15317 r) {
    return r.valor + r.id;
}
