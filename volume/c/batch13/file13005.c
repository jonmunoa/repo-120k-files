// fichero 13005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13005;

Registro13005 crear_registro13005(int id) {
    Registro13005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13005(Registro13005 r) {
    return r.valor + r.id;
}
