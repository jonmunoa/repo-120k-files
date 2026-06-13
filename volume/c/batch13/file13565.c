// fichero 13565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13565;

Registro13565 crear_registro13565(int id) {
    Registro13565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13565(Registro13565 r) {
    return r.valor + r.id;
}
