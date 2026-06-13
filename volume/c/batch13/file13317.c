// fichero 13317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13317;

Registro13317 crear_registro13317(int id) {
    Registro13317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13317(Registro13317 r) {
    return r.valor + r.id;
}
