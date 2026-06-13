// fichero 13321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13321;

Registro13321 crear_registro13321(int id) {
    Registro13321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13321(Registro13321 r) {
    return r.valor + r.id;
}
