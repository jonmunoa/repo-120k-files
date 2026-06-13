// fichero 13817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13817;

Registro13817 crear_registro13817(int id) {
    Registro13817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13817(Registro13817 r) {
    return r.valor + r.id;
}
