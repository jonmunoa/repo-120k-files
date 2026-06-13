// fichero 13437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13437;

Registro13437 crear_registro13437(int id) {
    Registro13437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13437(Registro13437 r) {
    return r.valor + r.id;
}
